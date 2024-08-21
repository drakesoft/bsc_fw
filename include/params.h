/* Copyright (c) 2022 tobias
*
* This software is released under the MIT License.
*/
#include "Arduino.h"
#include "defines.h"
#include "WebSettings.h"
/* ***********************************************************************************
* Wichtiger Hinweis!
* params.h nicht manuell bearbeiten! Änderungen immer in der params_py.h vornehmen!
* Die params.h wird beim Build automatisch erstellt!
* ***********************************************************************************/
const char paramSystem[] PROGMEM = R"rawliteral( {"page":[{"name":160,"label":"BSC Benutzer","type":0,"default":"bsc","dt":8,"flash":"1"},{"name":161,"label":"BSC Passwort","type":2,"default":"admin","dt":8,"flash":"1"},{"name":45,"label":"Device Name","type":0,"default":"bsc","minlen":3,"dt":8,"help":"Wird auch als MQTT device name genutzt"},{"name":144,"label":"Display timeout","type":3,"default":5,"min":1,"max":120,"unit":"min","dt":1},{"label":"WLAN","type":13},{"name":40,"label":"WLAN SSID","type":0,"default":"","dt":8},{"name":41,"label":"WLAN Passwort","type":2,"default":"","dt":8},{"name":96,"label":"WLAN connect Timeout","type":3,"unit":"s","default":30,"min":0,"max":3600,"dt":3,"help":"Der Timeout gibt an, nach welcher Zeit ein Verbindungsversuch abgebrochen wird und ein Accesspoint erstellt wird.<br>0 deaktiviert den Timeout."},{"label":"Static IP","type":13},{"name":36,"label":"IP-Adresse","type":0,"default":"","dt":8,"flash":"1","help":"Wenn die IP-Adresse leer ist, dann ist DHCP aktiv"},{"name":37,"label":"Gateway","type":0,"default":"","dt":8,"flash":"1"},{"name":38,"label":"Subnet","type":0,"default":"255.255.255.0","dt":8,"flash":"1"},{"name":39,"label":"DNS","type":0,"default":"","dt":8,"help":"Optional","flash":"1"},{"label":"MQTT","type":13,"help":"Zum Übernehmen der Settings, muss der BSC neu gestartet werden!"},{"name":44,"label":"MQTT enable","type":10,"default":0,"dt":9},{"name":42,"label":"MQTT Server IP","type":0,"default":"","dt":8},{"name":43,"label":"MQTT Server Port","type":3,"default":1883,"min":1,"max":10000,"dt":3},{"name":86,"label":"Username","type":0,"default":"","dt":8},{"name":87,"label":"Passwort","type":2,"default":"","dt":8},{"name":46,"label":"MQTT Topic Name","type":0,"default":"bsc","dt":8},{"name":133,"label":"MQTT Sendeintervall","unit":"s","type":3,"default":60,"min":30,"max":120,"dt":1},{"label":"NTP","type":13,"help":"Zum Übernehmen der Settings, muss der BSC neu gestartet werden!"},{"name":122,"label":"Server Name/IP","type":0,"default":"pool.ntp.org","flash":"1","dt":8},{"label":"Aufzeichnung","type":13},{"name":143,"label":"Aufzeichnung Periode","type":9,"options":[{"v":0,"l":"Aus"},{"v":1,"l":"24h"}],"default":0,"dt":1},{"label":"Triggername","type":13},{"label":"Trigger description","label_entry":"Trigger","label_offset":1,"groupsize":10,"type":12,"group":[{"name":117,"label":"Trigger","type":0,"default":"","flash":"1","dt":8}]}],"btn":[{"name":"save-btn","label":"Save"}]} )rawliteral";
const char paramBluetooth[] PROGMEM = R"rawliteral( {"page":[{"label":"Bluetooth","label_entry":"BT Device","groupsize":7,"type":12,"help":"Die MAC-Adresse muss klein geschrieben werden!","group":[{"name":4,"label":"Bluetooth","type":9,"options":[{"v":"0","l":"nicht belegt"},{"v":"1","l":"NEEY Balancer 4A"},{"v":"2","l":"JK-BMS [Test]"},{"v":"3","l":"JK-BMS (32S) [Test]"}],"default":"0","dt":1},{"name":5,"label":"MAC-Adresse","type":0,"default":"","dt":8},{"name":126,"label":"Deactivate","type":9,"options":[{"v":"0","l":"Aus"},{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"0","dt":1}]}],"btn":[{"name":"save-btn","label":"Save"}],"timer":[{"type":"text","interval":2000}]} )rawliteral";
const char paramSerial[] PROGMEM = R"rawliteral( {"page":[{"label":"Serielle Schnittstellen","label_entry":"Serial","help":"<b>To use serial 3-11, the serial extension is required!</b>","groupsize":11,"type":12,"group":[{"name":1,"label":"Serial","type":9,"options":[{"v":"0","l":"nicht belegt"},{"v":"9","l":"BPN (not use)"},{"v":"1","l":"JBD BMS"},{"v":"2","l":"JK BMS"},{"v":"3","l":"Seplos BMS"},{"v":"12","l":"Seplos V3 BMS (Test)"},{"v":"4","l":"DALY BMS"},{"v":"5","l":"Sylcin BMS"},{"v":"7","l":"Gobel RN150 BMS (Test)"},{"v":"11","l":"Gobel PC200 BMS (Test)"},{"v":"6","l":"JK BMS V1.3 (only monitoring)"},{"v":"8","l":"JK BMS - CAN (Test; only monitoring)"},{"v":"10","l":"Victron SmartShunt"}],"default":"0","dt":1}]},{"label":"DaisyChain Multi-Pack-BMS Einstellungen","type":13},{"name":108,"label":"Anzahl Packs","help":"Diese Einstellung betrifft nur als DaisyChain angeschlossene BMS an Serial 2.","type":3,"default":1,"min":1,"max":8,"dt":1},{"label":"Allgemein","type":13},{"name":141,"label":"Anzahl Zellen","type":3,"default":16,"min":4,"max":24,"dt":1},{"label":"Filter","type":13},{"name":121,"label":"Anzahl RX Fehler","help":"Gibt an, nach wievielen fehlerhaften Paketen es als Fehler bewertet wird.","type":3,"default":2,"min":1,"max":125,"flash":"1","dt":1},{"name":120,"label":"Abweichung Zellspannung","help":"0=Filter deaktiviert","unit":"%","type":3,"default":0,"min":0,"max":100,"flash":"1","dt":1},{"label":"Plausibility check","type":13},{"name":132,"label":"Cellvoltage plausibility check","type":9,"options":[{"v":"0","l":"Aus"},{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"0","dt":1},{"label":"Value adjustments","type":13},{"label":"Serielle Schnittstellen","label_entry":"Serial","groupsize":11,"type":12,"group":[{"name":127,"label":"Cellvoltage for SoC 100%","help":"0=deaktiviert","unit":"mV","type":3,"default":0,"min":0,"max":5000,"dt":3},{"name":130,"label":"Cellvoltage for SoC 0%","help":"0=deaktiviert","unit":"mV","type":3,"default":0,"min":0,"max":5000,"dt":3}]}],"btn":[{"name":"save-btn","label":"Save"}]} )rawliteral";
const char paramAlarmBms[] PROGMEM = R"rawliteral( {"page":[{"label":"BMS Alarmregeln","label_entry":"Alarmregel","groupsize":20,"type":12,"group":[{"name":9,"label":"Zu &uuml;berwachendes BMS","type":9,"options":[{"v":"127","l":"Aus"},{"v":"0","l":"Bluetooth 0"},{"v":"1","l":"Bluetooth 1"},{"v":"2","l":"Bluetooth 2"},{"v":"3","l":"Bluetooth 3"},{"v":"4","l":"Bluetooth 4"},{"v":"5","l":"Bluetooth 5"},{"v":"6","l":"Bluetooth 6"},{"v":"7","l":"Serial 0"},{"v":"8","l":"Serial 1"},{"v":"9","l":"Serial 2"},{"v":"10","l":"Serial 3"},{"v":"11","l":"Serial 4"},{"v":"12","l":"Serial 5"},{"v":"13","l":"Serial 6"},{"v":"14","l":"Serial 7"},{"v":"15","l":"Serial 8"},{"v":"16","l":"Serial 9"},{"v":"17","l":"Serial 10"}],"default":127,"dt":1},{"label":"Keine Daten vom BMS","type":13},{"name":17,"label":"Aktion bei Trigger","type":9,"options":[{"v":"0","l":"Aus"},{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"0","dt":1},{"name":12,"label":"Trigger keine Daten","unit":"s","type":3,"default":15,"min":1,"max":255,"dt":1},{"label":"Spannungs&uuml;berwachung Zelle Min/Max","type":13},{"name":18,"label":"Aktion bei Trigger","type":9,"options":[{"v":"0","l":"Aus"},{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"0","dt":1},{"name":14,"label":"Anzahl Zellen Monitoring","type":3,"default":16,"min":1,"max":24,"dt":1},{"name":15,"label":"Zellspannung Min","unit":"mV","type":3,"default":2500,"min":0,"max":5000,"dt":3},{"name":16,"label":"Zellspannung Max","unit":"mV","type":3,"default":3650,"min":0,"max":5000,"dt":3},{"label":"Spannungs&uuml;berwachung Gesamt Min/Max","type":13},{"name":19,"label":"Aktion bei Trigger","type":9,"options":[{"v":"0","l":"Aus"},{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"0","dt":1},{"name":72,"label":"Spannung Min","unit":"V","type":4,"default":48.0,"min":0,"max":60,"dt":7},{"name":73,"label":"Spannung Max","unit":"V","type":4,"default":54.0,"min":0,"max":60,"dt":7},{"name":131,"label":"Hysterese Min/Max","unit":"V","type":4,"default":0.5,"min":0,"max":10,"dt":7}]}],"btn":[{"name":"save-btn","label":"Save"}]} )rawliteral";
const char paramAlarmTemp[] PROGMEM = R"rawliteral( {"page":[{"label":"Alarm bei Sensorfehler","type":13},{"name":109,"label":"Trigger","type":9,"options":[{"v":"0","l":"Aus"},{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"0","dt":1},{"name":110,"label":"Timeout","unit":"s","type":3,"default":"5","min":5,"max":240,"dt":1},{"label":"Temperatur &#220;berwachung","type":13},{"name":20,"label":"Temperatur &#220;berwachung","label_entry":"&#220;berwachung","groupsize":10,"type":12,"group":[{"name":128,"label":"Quelle","type":9,"options":[{"v":"1","l":"BMS"},{"v":"2","l":"Onewire"}],"default":"1","dt":1},{"name":129,"label":"Zu &uuml;berwachendes BMS (nur wenn Quelle BMS)","type":9,"options":[{"v":"0","l":"Bluetooth 0"},{"v":"1","l":"Bluetooth 1"},{"v":"2","l":"Bluetooth 2"},{"v":"3","l":"Bluetooth 3"},{"v":"4","l":"Bluetooth 4"},{"v":"5","l":"Bluetooth 5"},{"v":"6","l":"Bluetooth 6"},{"v":"7","l":"Serial 0"},{"v":"8","l":"Serial 1"},{"v":"9","l":"Serial 2"},{"v":"10","l":"Serial 3"},{"v":"11","l":"Serial 4"},{"v":"12","l":"Serial 5"},{"v":"13","l":"Serial 6"},{"v":"14","l":"Serial 7"},{"v":"15","l":"Serial 8"},{"v":"16","l":"Serial 9"},{"v":"17","l":"Serial 10"}],"default":7,"dt":1},{"name":21,"label":"Sensornummer von","type":3,"default":"","min":0,"max":255,"dt":1,"help":"Mögliche Werte:<br>BMS:0-2<br>Onewire:0-63"},{"name":22,"label":"Sensornummer bis","type":3,"default":"","min":0,"max":255,"dt":1,"help":"Mögliche Werte:<br>BMS:0-2<br>Onewire:0-63"},{"name":27,"label":"&Uuml;berwachung","type":9,"options":[{"v":"0","l":"nicht belegt"},{"v":"1","l":"Maximalwert-&Uuml;berschreitung"},{"v":"2","l":"Maximalwert-&Uuml;berschreitung (Referenz)"},{"v":"3","l":"Differenzwert-&Uuml;berwachung"}],"default":"0","dt":1,"help":"Maximalwert-&Uuml;berschreitung: Wert1=Maximale Temperatur<br>Maximalwert-&Uuml;berschreitung (Referenz): Wert1=Temperatur Offset<br>Differenzwert-&Uuml;berwachung: Wert1=Maximal erlaubte Differenz"},{"name":23,"label":"Referenzsensor","type":3,"default":"","min":0,"max":255,"dt":1},{"name":24,"label":"Wert 1","type":4,"default":"","min":0,"max":70,"dt":7},{"name":25,"label":"Hysterese","type":4,"default":"","min":0,"max":70,"dt":7},{"name":26,"label":"Ausl&ouml;sung","type":9,"options":[{"v":"0","l":"Aus"},{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"0","dt":1}]}],"btn":[{"name":"save-btn","label":"Save"}]} )rawliteral";
const char paramDigitalOut[] PROGMEM = R"rawliteral( {"page":[{"label":"Relaisausg&#228;nge","label_entry":"Relaisausgang","groupsize":6,"type":12,"group":[{"name":30,"label":"Ausl&#246;severhalten","type":9,"options":[{"v":"0","l":"Permanent"},{"v":"1","l":"Impuls"}],"default":"0","dt":1},{"name":31,"label":"Impulsdauer","unit":"ms","type":3,"default":500,"min":100,"max":10000,"dt":3},{"name":33,"label":"Verz&ouml;gerung","unit":"s","type":3,"default":0,"min":0,"max":254,"dt":1},{"name":32,"label":"Auswahl Trigger","type":14,"options":[{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"","dt":3}]}],"btn":[{"name":"save-btn","label":"Save"}]} )rawliteral";
const char paramDigitalIn[] PROGMEM = R"rawliteral( {"page":[{"label":"Digitaleing&#228;nge","label_entry":"Digitaleingang","groupsize":4,"type":12,"group":[{"name":34,"label":"Eingang invertieren","type":10,"default":"0","dt":9},{"name":35,"label":"Weiterleiten an","type":9,"options":[{"v":"0","l":"Aus"},{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"0","dt":1}]}],"btn":[{"name":"save-btn","label":"Save"}]} )rawliteral";
const char paramOnewireAdr[] PROGMEM = R"rawliteral( {"page":[{"name":50,"label":"Onewire enable","type":10,"default":"0","dt":9},{"label":"OW Adressen","label_entry":"OW Adr.","groupsize":64,"type":12,"group":[{"name":51,"label":"OW Adr.","type":0,"default":"","flash":"1","dt":8}]}],"btn":[{"name":"save-btn","label":"Save"}],"timer":[{"type":"text","interval":2000}]} )rawliteral";
const char paramOnewire2[] PROGMEM = R"rawliteral( {"page":[{"label":"Onewire Sensoren","label_entry":"Sensor","groupsize":64,"type":12,"group":[{"name":52,"label":"Offset","unit":"&deg;C","type":4,"default":0,"min":-10,"max":10,"dt":7}]}],"btn":[{"name":"save-btn","label":"Save"}]} )rawliteral";
const char paramBmsToInverter[] PROGMEM = R"rawliteral( {"page":[{"name":60,"label":"BMS Canbus enable","type":10,"default":"0","dt":9},{"name":2,"label":"Canbus protocol","type":9,"options":[{"v":"0","l":"nicht belegt"},{"v":"1","l":"Solis RHI"},{"v":"2","l":"Pylontech"},{"v":"3","l":"VICTRON"},{"v":"4","l":"VICTRON 250k"},{"v":"5","l":"BYD"}],"default":"nb","dt":1},{"name":125,"label":"Send extended data","type":10,"default":"0","dt":9},{"name":61,"label":"Datenquelle (Master)","type":9,"options":[{"v":"0","l":"Bluetooth 0"},{"v":"1","l":"Bluetooth 1"},{"v":"2","l":"Bluetooth 2"},{"v":"3","l":"Bluetooth 3"},{"v":"4","l":"Bluetooth 4"},{"v":"5","l":"Bluetooth 5"},{"v":"6","l":"Bluetooth 6"},{"v":"7","l":"Serial 0"},{"v":"8","l":"Serial 1"},{"v":"9","l":"Serial 2"},{"v":"10","l":"Serial 3"},{"v":"11","l":"Serial 4"},{"v":"12","l":"Serial 5"},{"v":"13","l":"Serial 6"},{"v":"14","l":"Serial 7"},{"v":"15","l":"Serial 8"},{"v":"16","l":"Serial 9"},{"v":"17","l":"Serial 10"}],"default":"0","dt":1},{"name":83,"label":"+ Datenquelle","type":14,"options":[{"v":"0","l":"Serial 0"},{"v":"1","l":"Serial 1"},{"v":"2","l":"Serial 2"},{"v":"3","l":"Serial 3"},{"v":"4","l":"Serial 4"},{"v":"5","l":"Serial 5"},{"v":"6","l":"Serial 6"},{"v":"7","l":"Serial 7"},{"v":"8","l":"Serial 8"},{"v":"9","l":"Serial 9"},{"v":"10","l":"Serial 10"}],"default":0,"dt":5},{"label":"Valuehandling Multi-BMS","type":13},{"name":116,"label":"SoC","type":9,"options":[{"v":"0","l":"Masterquelle"},{"v":1,"l":"SoC Mittelwert"},{"v":2,"l":"SoC Maximalwert"},{"v":3,"l":"BMS"}],"default":"0","dt":1},{"name":142,"label":"BMS für SoC","type":9,"options":[{"v":"0","l":"Bluetooth 0"},{"v":"1","l":"Bluetooth 1"},{"v":"2","l":"Bluetooth 2"},{"v":"3","l":"Bluetooth 3"},{"v":"4","l":"Bluetooth 4"},{"v":"5","l":"Bluetooth 5"},{"v":"6","l":"Bluetooth 6"},{"v":"7","l":"Serial 0"},{"v":"8","l":"Serial 1"},{"v":"9","l":"Serial 2"},{"v":"10","l":"Serial 3"},{"v":"11","l":"Serial 4"},{"v":"12","l":"Serial 5"},{"v":"13","l":"Serial 6"},{"v":"14","l":"Serial 7"},{"v":"15","l":"Serial 8"},{"v":"16","l":"Serial 9"},{"v":"17","l":"Serial 10"}],"default":7,"dt":1,"help":"Hierfür muss bei SoC BMS ausgewählt sein"},{"label":"Basisdaten","type":13},{"name":62,"label":"Absorption Ladespannung","unit":"V","type":16,"default":"544","min":12,"max":66,"dt":3,"help":"Die Absorption Ladespannung entspricht einer erhöhten Spannung zum Erreichen des Voll-Zustandes."},{"name":156,"label":"Float Ladespannung","unit":"V","type":16,"default":"544","min":12,"max":66,"dt":3,"help":"Die Floatspannung wird nach Erreichen der einstellbaren Cutoff-Funktion angewendet."},{"name":85,"label":"Float Ladespannung SoC","unit":"%","type":3,"default":"95","min":1,"max":100,"dt":1,"help":"Beim Unterschreiten des eingestellten SoC wird von der Float in die Absorption Ladespannung gewechselt."},{"name":64,"label":"Max. Ladestrom","unit":"A","type":3,"default":"100","min":0,"max":1000,"dt":3},{"name":65,"label":"Max. Entladestrom","unit":"A","type":3,"default":"100","min":0,"max":1000,"dt":3},{"name":66,"label":"Ladeleistung auf 0 bei","type":14,"options":[{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"","dt":3},{"name":67,"label":"Entladeleistung auf 0 bei","type":14,"options":[{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"","dt":3},{"name":77,"label":"SOC auf 100 bei","type":14,"options":[{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"","dt":3},{"label":"Batterypack settings","label_entry":"BMS Serial","groupsize":11,"type":15,"group":[{"name":118,"label":"Charge current per pack","type":3,"default":280,"min":0,"max":500,"dt":3},{"name":119,"label":"Discharge current per pack","type":3,"default":280,"min":0,"max":500,"dt":3}]},{"label":"Alarme (Inverter)","type":13},{"name":112,"label":"High battery voltage","type":14,"options":[{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"","dt":5},{"name":113,"label":"Low battery voltage","type":14,"options":[{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"","dt":5},{"name":114,"label":"High Temperature","type":14,"options":[{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"","dt":5},{"name":115,"label":"Low Temperature","type":14,"options":[{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"","dt":5},{"label":"Batterietemperatur","type":13},{"name":97,"label":"Quelle","type":9,"options":[{"v":"1","l":"BMS"},{"v":"2","l":"Onewire"}],"default":"1","dt":1},{"name":98,"label":"Sensornummer","type":3,"default":"0","min":0,"max":64,"dt":1,"help":"Mögliche Werte:<br>BMS:0-2<br>Onewire:0-63"},{"label":"Trigger bei SoC","type":13,"help":"Auslösen eines Triggers, wenn ein bestimmter SoC über- oder unterschritten wird."},{"label_entry":"Rule","groupsize":4,"type":12,"group":[{"name":134,"label":"Trigger","type":9,"options":[{"v":"0","l":"Aus"},{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"0","dt":1},{"name":135,"label":"SoC - Trigger ein","unit":"%","type":3,"default":95,"min":1,"max":100,"dt":1},{"name":136,"label":"SoC - Trigger aus","unit":"%","type":3,"default":80,"min":1,"max":100,"dt":1}]}],"btn":[{"name":"save-btn","label":"Save"}]} )rawliteral";
const char paramInverterCharge[] PROGMEM = R"rawliteral( {"page":[{"label":"Ladestrom Zell-Spannungsabhängig drosseln","type":13},{"name":74,"label":"Ein/Aus","type":10,"default":"0","dt":9},{"name":75,"label":"Starten bei Zellspg. gr&ouml;ßer","help":"Sobald die h&ouml;chste Zellspannung diesen Wert &uuml;bersteigt wird die Drosselung aktiv.","unit":"mV","type":3,"default":"3325","min":2500,"max":5000,"dt":3},{"name":76,"label":"Maximale Zellspannung","help":"Sobald die h&ouml;chste Zellspannung diesen Wert &uuml;bersteigt wird nur noch mit dem Mindest-Ladestrom geladen.<br>Hinweis: Der Wert muss gr&ouml;ßer sein als die Zell-Startspannung.<br>Achtung: Bei aktivem Autobalancing wird diese Spannung durch die Balance-Zellspannung ersetzt!","unit":"mV","type":3,"default":"3300","min":2500,"max":5000,"dt":3},{"name":78,"label":"Mindest Ladestrom","unit":"A","type":3,"default":"5","min":0,"max":200,"dt":1},{"label":"Ladestrom reduzieren bei Zelldrift","type":13},{"name":68,"label":"Ein/Aus","type":10,"default":"0","dt":9},{"name":71,"label":"Starten bei Zellspg. gr&ouml;ßer","unit":"mV","type":3,"default":"3400","min":2500,"max":5000,"dt":3},{"name":69,"label":"Starten bei Drift gr&ouml;ßer","unit":"mV","type":3,"default":"10","min":1,"max":200,"dt":1},{"name":70,"label":"Reduzierung pro weiterem mV Abweichung","unit":"A","type":3,"default":"1","min":1,"max":200,"dt":1,"help":"Die Reduzierung bezieht sich auf den eingestellten Maximalstrom"},{"label":"Ladestrom reduzieren - SoC","type":13},{"name":79,"label":"Ein/Aus","type":10,"default":"0","dt":9},{"name":80,"label":"Reduzierung ab SoC","unit":"%","type":3,"default":"98","min":1,"max":99,"dt":1},{"name":81,"label":"Pro 1% um x A reduzieren","unit":"A","type":16,"default":"10","min":1,"max":1000,"dt":3,"help":"Die Reduzierung bezieht sich auf den eingestellten Maximalstrom"},{"name":155,"label":"Mindest Ladestrom","unit":"A","type":3,"default":"0","min":0,"max":100,"dt":1},{"label":"Dynamische Ladespannungsbegrenzung (Beta!)","type":13,"help":"Sobald die Spannung einer Zelle und das Delta zwischen der niedrigsten und der höchsten Zellenspannung größer als eingestellt werden,<br>wird die Ladespannung dynamisch angepasst, um die maximale Ladeleistung zu erreichen, ohne dass die Zellen weiter auseinander driften."},{"name":93,"label":"Ein/Aus","type":10,"default":"0","dt":9},{"name":94,"label":"Start-Zellspannung","unit":"mV","type":3,"default":"3400","min":2000,"max":4000,"dt":3},{"name":95,"label":"Spg.-Delta Min/Max","unit":"mV","type":3,"default":"5","min":1,"max":100,"dt":1},{"label":"Autobalance","type":13},{"name":157,"label":"Ein/Aus","type":10,"default":"0","dt":9},{"name":149,"label":"Balance-Intervall","help":"Gibt die Tage an, nach denen wieder das Balancing gestartet werden soll.<br>Hinweis: Wenn der Autobalancer aktiv, dann ist in der Ballance-Zeit der Charge-Current Cut-Off deaktiviert!<br>Es muss die richtige Anzahl der Zellen in den Serial-Settings eingestellt sein!","unit":"T","type":3,"default":"5","min":1,"max":30,"dt":1},{"name":150,"label":"Start Zellspannung","help":"Zellspannung die erreicht sein muss, damit der Vorgang beginnt.","unit":"mV","type":3,"default":"3300","min":2500,"max":5000,"dt":3},{"name":162,"label":"Balance Mindest-Zeit","help":"So lange läuft das Balancing mindestens","unit":"Min","type":3,"default":"0","min":0,"max":600,"dt":3},{"name":151,"label":"Balance-Ladespannung","help":"Die Max. Ladespannung wird während dem Autobalancing auf diese Spannung angehoben.","unit":"V","type":16,"default":"552","min":50,"max":60,"dt":3},{"name":154,"label":"Balance-Zellspannung","unit":"mV","type":3,"default":"3450","min":2500,"max":5000,"dt":3},{"name":152,"label":"Celldif. fertig","help":"Balancing ist fertig, wenn die eingestellte Zelldifferenz erreicht ist.","unit":"mV","type":3,"default":"5","min":0,"max":50,"dt":1},{"name":153,"label":"Timeout","help":"Ist in dieser Zeit das Balancing nicht fertig, wird der Vorgang abgebrochen.","unit":"Min","type":3,"default":"60","min":0,"max":600,"dt":3},{"label":"Charge-Current Cut-Off","type":13,"help":"Liegt der Ladestrom die eingestellte Zeit (Cut-Off Time) unter dem Cut-Off Strom, wird der Ladestrom so lange auf 0 A gesetzt, bis der 'Float Ladespannung SoC' unterschritten wird."},{"name":158,"label":"Ein/Aus","type":10,"default":"0","dt":9},{"name":82,"label":"Cut-Off Time","unit":"s","type":3,"default":"300","min":1,"max":30000,"dt":3},{"name":84,"label":"Cut-Off Strom","unit":"A","type":16,"default":"10","min":0,"max":10000,"dt":3},{"name":145,"label":"Start Zellspannung","unit":"mV","type":3,"default":"0","min":0,"max":3500,"dt":3,"help":"Die Regelung wird erst aktiv, wenn die Zellspannung erreicht ist.<br>0 = Startvoltage deaktiviert"},{"label":"SoC beim Unterschreiten der Zellspannung","type":13,"help":"Wenn die eingestellte Zellspannung für den Ladebeginn unterschritten wird, dann kann durch das Senden eines beliebigen SoC an den Wechselrichter ein Nachladen veranlasst werden.<br>Es wird so lange nachgeladen, bis die Zellspannung Ladeende überschritten wird."},{"name":88,"label":"Ein/Aus","type":10,"default":"0","dt":9},{"name":89,"label":"Zellspannung Ladebeginn","unit":"mV","type":3,"default":"3000","min":2500,"max":4000,"dt":3},{"name":92,"label":"Zellspannung Ladeende","unit":"mV","type":3,"default":"0","min":0,"max":4000,"dt":3,"help":"Wenn Zellspannung Ladeende 0, dann wird geladen, bis die Zellspannung Ladebeginn wieder überschritten wird."},{"name":90,"label":"SoC","unit":"%","type":3,"default":"9","min":1,"max":100,"dt":1},{"name":91,"label":"Sperrzeit zwischen zwei Nachladungen","unit":"s","type":3,"default":"600","min":0,"max":3600,"dt":3}],"btn":[{"name":"save-btn","label":"Save"}]} )rawliteral";
const char paramInverterDischarge[] PROGMEM = R"rawliteral( {"page":[{"label":"Entladestrom Zell-Spannungsabhängig drosseln","type":13},{"name":159,"label":"Ein/Aus","type":10,"default":"0","dt":9},{"name":138,"label":"Starten bei Zellspg. kleiner","help":"Sobald die niedrigste Zellspannung diesen Wert unterschreitet wird die Drosselung aktiv.","unit":"mV","type":3,"default":"0","min":0,"max":5000,"dt":3},{"name":139,"label":"End Zellspannung","help":"Sobald die niedrigste Zellspannung diesen Wert unterschreitet wird maxmial noch mit dem Mindest-Entladestrom entladen.<br>Hinweis: Der Wert muss kleiner sein als die Zell-Startspannung.","unit":"mV","type":3,"default":"3300","min":2500,"max":5000,"dt":3},{"name":140,"label":"Mindest Entladestrom","unit":"A","type":3,"default":"1","min":0,"max":200,"dt":1}],"btn":[{"name":"save-btn","label":"Save"}]} )rawliteral";
const char paramDeviceNeeyBalancer[] PROGMEM = R"rawliteral( {"page":[{"label":"NEEY Active Balancer","label_entry":"NEEY","groupsize":7,"type":12,"depId":4,    "depVal":[{"v":"1"},{"v":"4"}],"depDt":1,  "group":[{"name":107,"label":"Balancer On","type":9,"options":[{"v":"0","l":"Aus"},{"v":"110","l":"Ein"},{"v":"1","l":"Trigger 1","d":7488},{"v":"2","l":"Trigger 2","d":7489},{"v":"3","l":"Trigger 3","d":7490},{"v":"4","l":"Trigger 4","d":7491},{"v":"5","l":"Trigger 5","d":7492},{"v":"6","l":"Trigger 6","d":7493},{"v":"7","l":"Trigger 7","d":7494},{"v":"8","l":"Trigger 8","d":7495},{"v":"9","l":"Trigger 9","d":7496},{"v":"10","l":"Trigger 10","d":7497}],"default":"0","flash":"1","dt":1},{"name":99,"label":"Cells","type":3,"default":16,"min":4,"max":24,"flash":"1","dt":1},{"name":100,"label":"Differenz Voltage","type":4,"default":0.005,"min":0,"max":1,"unit":"V","step":0.001,"flash":"1","dt":7},{"name":101,"label":"Max. Balance Current","type":4,"default":4.0,"min":0.1,"max":8,"unit":"A","step":"0.01","flash":"1","dt":7},{"name":102,"label":"Sleep Voltage","type":4,"default":3.30,"min":1,"max":5,"unit":"V","step":"0.001","flash":"1","dt":7},{"name":103,"label":"Equalization Voltage","type":4,"default":3.31,"min":1,"max":5,"unit":"V","step":"0.001","flash":"1","dt":7},{"name":104,"label":"Bat. Capacity","type":3,"default":200,"min":1,"max":500,"unit":"Ah","flash":"1","dt":3},{"name":105,"label":"BatType","type":9,"options":[{"v":"1","l":"NCM"},{"v":"2","l":"LFP"},{"v":"3","l":"LTO"},{"v":"4","l":"PbAc"}],"default":"2","flash":"1","dt":1}]}],"btn":[{"name":"save-btn","label":"Save"},{"label":"Read from NEEY","name":"read-btn"},{"label":"Write to NEEY","name":"write-btn"}],"timer":[{"type":"text","interval":2000}]} )rawliteral";
const char paramDeviceJbdBms[] PROGMEM = R"rawliteral( {"page":[{"label":"JBD BMS","label_entry":"Serial","groupsize":11,"type":12,"depId":1,    "depVal":1,          "depDt":1,                                             "group":[{"name":124,"label":"Cellvoltage 100%","type":3,"default":3400,"min":1000,"max":5000,"unit":"mV","flash":"1","dt":3}]}],"btn":[{"name":"save-btn","label":"Save"}]} )rawliteral";
const char paramDeviceBpn[] PROGMEM = R"rawliteral( {"page":[{"label":"General","type":13},{"name":1,"label":"Anzahl Zellen","type":3,"default":16,"min":0,"max":18,"unit":""},{"label":"Shunt","type":13},{"name":16,"label":"Nominal Capacity","type":3,"default":280,"min":0,"max":1000,"unit":"Ah"},{"label":"Ausgänge","type":13},{"name":17,"label":"Relais 1","type":9,"options":[{"v":"0","l":"Arbeitsstrom"},{"v":"1","l":"Ruhestrom"}],"default":"0","dt":1},{"name":18,"label":"Relais 2","type":9,"options":[{"v":"0","l":"Arbeitsstrom"},{"v":"1","l":"Ruhestrom"}],"default":"0","dt":1},{"label":"Alarm - Cell coltage","type":13},{"name":2,"label":"Low Cell Voltage","type":3,"default":2700,"min":2500,"max":4000,"unit":"mV"},{"name":3,"label":"High Cell Voltage","type":3,"default":3600,"min":2500,"max":4000,"unit":"mV"},{"name":4,"label":"Alarm Delay - Cell Voltage","type":3,"default":16,"min":0,"max":255,"unit":"s"},{"name":5,"label":"Ausgang","type":9,"options":[{"v":"0","l":"Aus"},{"v":"1","l":"Relais 1"},{"v":"2","l":"Relais 2"},{"v":"2","l":"DO"}],"default":"0","dt":1},{"label":"Alarm - Battery voltage","type":13},{"name":6,"label":"Low Battery Voltage","type":4,"step":"0.01","default":57.6,"min":0,"max":70,"unit":"V"},{"name":7,"label":"High Battery Voltage","type":4,"step":"0.01","default":57.6,"min":0,"max":70,"unit":"V"},{"name":8,"label":"Alarm Delay - Battery Voltage","type":3,"default":0,"min":0,"max":255,"unit":"s"},{"name":9,"label":"Ausgang","type":9,"options":[{"v":"0","l":"Aus"},{"v":"1","l":"Relais 1"},{"v":"2","l":"Relais 2"},{"v":"2","l":"DO"}],"default":"0","dt":1},{"label":"Alarm - Charge current","type":13},{"name":10,"label":"Max Charge Current","type":3,"default":100,"min":0,"max":4000,"unit":"A"},{"name":11,"label":"Alarm Delay - Charge Current","type":3,"default":0,"min":0,"max":255,"unit":"s"},{"name":12,"label":"Ausgang","type":9,"options":[{"v":"0","l":"Aus"},{"v":"1","l":"Relais 1"},{"v":"2","l":"Relais 2"},{"v":"2","l":"DO"}],"default":"0","dt":1},{"label":"Alarm - Discharge current","type":13},{"name":13,"label":"Max Discharge Current","type":3,"default":100,"min":0,"max":4000,"unit":"A"},{"name":14,"label":"Alarm Delay - Discharge Current","type":3,"default":0,"min":0,"max":255,"unit":"s"},{"name":15,"label":"Ausgang","type":9,"options":[{"v":"0","l":"Aus"},{"v":"1","l":"Relais 1"},{"v":"2","l":"Relais 2"},{"v":"2","l":"DO"}],"default":"0","dt":1}],"sys":{"store":0},"btn":[{"name":"save-btn","label":"Write to BPN"},{"name":"read-btn","label":"Read from BPN"}],"timer":[{"type":"json","interval":2000}]} )rawliteral";
