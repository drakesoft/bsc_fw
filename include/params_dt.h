#include "defines.h"

#define DT_ID_PARAM_I_AM_A_SUPPORTER PARAM_DT_BO
#define DT_ID_PARAM_MQTT_DEVICE_NAME PARAM_DT_ST
#define DT_ID_PARAM_DISPLAY_TIMEOUT PARAM_DT_U8
#define DT_ID_PARAM_WLAN_SSID PARAM_DT_ST
#define DT_ID_PARAM_WLAN_PWD PARAM_DT_ST
#define DT_ID_PARAM_WLAN_CONNECT_TIMEOUT PARAM_DT_U16
#define DT_ID_PARAM_WLAN_IP_ADRESSE PARAM_DT_ST
#define DT_ID_PARAM_WLAN_GATEWAY PARAM_DT_ST
#define DT_ID_PARAM_WLAN_SUBNET PARAM_DT_ST
#define DT_ID_PARAM_WLAN_DNS PARAM_DT_ST
#define DT_ID_PARAM_MQTT_SERVER_ENABLE PARAM_DT_BO
#define DT_ID_PARAM_MQTT_SERVER_IP PARAM_DT_ST
#define DT_ID_PARAM_MQTT_SERVER_PORT PARAM_DT_U16
#define DT_ID_PARAM_MQTT_USERNAME PARAM_DT_ST
#define DT_ID_PARAM_MQTT_PWD PARAM_DT_ST
#define DT_ID_PARAM_MQTT_TOPIC_NAME PARAM_DT_ST
#define DT_ID_PARAM_MQTT_SEND_DELAY PARAM_DT_U8
#define DT_ID_PARAM_SYSTEM_NTP_SERVER_NAME PARAM_DT_ST
#define DT_ID_PARAM_SYSTEM_NTP_SERVER_PORT PARAM_DT_U16
#define DT_ID_PARAM_SYSTEM_RECORD_VALUES_PERIODE PARAM_DT_U8
#define DT_ID_PARAM_TRIGGER_NAMES PARAM_DT_ST
#define DT_ID_PARAM_SS_BTDEV PARAM_DT_U8
#define DT_ID_PARAM_SS_BTDEVMAC PARAM_DT_ST
#define DT_ID_PARAM_BTDEV_DEACTIVATE PARAM_DT_U8
#define DT_ID_PARAM_SERIAL_CONNECT_DEVICE PARAM_DT_U8
#define DT_ID_PARAM_SERIAL2_CONNECT_TO_ID PARAM_DT_U8
#define DT_ID_PARAM_SERIAL_NUMBER_OF_CELLS PARAM_DT_U8
#define DT_ID_PARAM_BMS_FILTER_RX_ERROR_COUNT PARAM_DT_U8
#define DT_ID_PARAM_BMS_FILTER_CELL_VOLTAGE_PERCENT PARAM_DT_U8
#define DT_ID_PARAM_BMS_PLAUSIBILITY_CHECK_CELLVOLTAGE PARAM_DT_U8
#define DT_ID_PARAM_BMS_BALUE_ADJUSTMENTS_SOC100_CELL_VOLTAGE PARAM_DT_U16
#define DT_ID_PARAM_BMS_BALUE_ADJUSTMENTS_SOC0_CELL_VOLTAGE PARAM_DT_U16
#define DT_ID_PARAM_ALARM_BTDEV_BMS_SELECT PARAM_DT_U8
#define DT_ID_PARAM_ALARM_BTDEV_ALARM_AKTION PARAM_DT_U8
#define DT_ID_PARAM_ALARM_BTDEV_ALARM_TIME_OUT PARAM_DT_U8
#define DT_ID_PARAM_ALARM_BT_CELL_SPG_ALARM_AKTION PARAM_DT_U8
#define DT_ID_PARAM_ALARM_BT_CNT_CELL_CTRL PARAM_DT_U8
#define DT_ID_PARAM_ALARM_BT_CELL_SPG_MIN PARAM_DT_U16
#define DT_ID_PARAM_ALARM_BT_CELL_SPG_MAX PARAM_DT_U16
#define DT_ID_PARAM_ALARM_BT_GESAMT_SPG_ALARM_AKTION PARAM_DT_U8
#define DT_ID_PARAM_ALARM_BT_GESAMT_SPG_MIN PARAM_DT_FL
#define DT_ID_PARAM_ALARM_BT_GESAMT_SPG_MAX PARAM_DT_FL
#define DT_ID_PARAM_ALARM_BT_GESAMT_SPG_HYSTERESE PARAM_DT_FL
#define DT_ID_PARAM_TEMP_SENSOR_TIMEOUT_TRIGGER PARAM_DT_U8
#define DT_ID_PARAM_TEMP_SENSOR_TIMEOUT_TIME PARAM_DT_U8
#define DT_ID_PARAM_TEMP_ALARM_TEMP_QUELLE PARAM_DT_U8
#define DT_ID_PARAM_TEMP_ALARM_BMS_QUELLE PARAM_DT_U8
#define DT_ID_PARAM_TEMP_ALARM_SENSOR_VON PARAM_DT_U8
#define DT_ID_PARAM_TEMP_ALARM_SENSOR_BIS PARAM_DT_U8
#define DT_ID_PARAM_TEMP_ALARM_UEBERWACH_FUNKTION PARAM_DT_U8
#define DT_ID_PARAM_TEMP_ALARM_SENSOR_VERGLEICH PARAM_DT_U8
#define DT_ID_PARAM_TEMP_ALARM_WERT1 PARAM_DT_FL
#define DT_ID_PARAM_TEMP_ALARM_WERT2 PARAM_DT_FL
#define DT_ID_PARAM_TEMP_ALARM_AKTION PARAM_DT_U8
#define DT_ID_PARAM_DO_AUSLOESEVERHALTEN PARAM_DT_U8
#define DT_ID_PARAM_DO_IMPULSDAUER PARAM_DT_U16
#define DT_ID_PARAM_DO_VERZOEGERUNG PARAM_DT_U8
#define DT_ID_PARAM_DO_AUSLOESUNG_BEI PARAM_DT_U16
#define DT_ID_PARAM_DI_INVERTIERT PARAM_DT_BO
#define DT_ID_PARAM_DI_ALARM_NR PARAM_DT_U8
#define DT_ID_PARAM_ONWIRE_ENABLE PARAM_DT_BO
#define DT_ID_PARAM_ONEWIRE_ADR PARAM_DT_ST
#define DT_ID_PARAM_ONWIRE_TEMP_OFFSET PARAM_DT_FL
#define DT_ID_PARAM_BMS_CAN_ENABLE PARAM_DT_BO
#define DT_ID_PARAM_SS_CAN PARAM_DT_U8
#define DT_ID_PARAM_BMS_CAN_EXTENDED_DATA_ENABLE PARAM_DT_BO
#define DT_ID_PARAM_BMS_CAN_DATASOURCE PARAM_DT_U8
#define DT_ID_PARAM_BMS_CAN_DATASOURCE_SS1 PARAM_DT_U32
#define DT_ID_PARAM_INVERTER_MULTI_BMS_VALUE_SOC PARAM_DT_U8
#define DT_ID_PARAM_INVERTER_BMS_QUELLE_SOC PARAM_DT_U8
#define DT_ID_PARAM_BMS_MAX_CHARGE_SPG PARAM_DT_FL
#define DT_ID_PARAM_BMS_MAX_CHARGE_CURRENT PARAM_DT_U16
#define DT_ID_PARAM_BMS_MAX_DISCHARGE_CURRENT PARAM_DT_U16
#define DT_ID_PARAM_BMS_LADELEISTUNG_AUF_NULL PARAM_DT_U16
#define DT_ID_PARAM_BMS_ENTLADELEISTUNG_AUF_NULL PARAM_DT_U16
#define DT_ID_PARAM_BMS_SOC_AUF_FULL PARAM_DT_U16
#define DT_ID_PARAM_BATTERY_PACK_CHARGE_CURRENT PARAM_DT_U16
#define DT_ID_PARAM_BATTERY_PACK_DISCHARGE_CURRENT PARAM_DT_U16
#define DT_ID_PARAM_DYNAMIC_CHARGE_VOLTAGE_CURRENT PARAM_DT_U16
#define DT_ID_PARAM_DYNAMIC_CHARGE_VOLTAGE_OFFSET_MIN PARAM_DT_U16
#define DT_ID_PARAM_DYNAMIC_CHARGE_VOLTAGE_OFFSET_MAX PARAM_DT_U16
#define DT_ID_PARAM_BMS_ALARM_HIGH_BAT_VOLTAGE PARAM_DT_U32
#define DT_ID_PARAM_BMS_ALARM_LOW_BAT_VOLTAGE PARAM_DT_U32
#define DT_ID_PARAM_BMS_ALARM_HIGH_TEMPERATURE PARAM_DT_U32
#define DT_ID_PARAM_BMS_ALARM_LOWTEMPERATURE PARAM_DT_U32
#define DT_ID_PARAM_INVERTER_BATT_TEMP_QUELLE PARAM_DT_U8
#define DT_ID_PARAM_INVERTER_BATT_TEMP_SENSOR PARAM_DT_U8
#define DT_ID_PARAM_INVERTER_LADESTROM_REDUZIEREN_ZELLSPG_EN PARAM_DT_BO
#define DT_ID_PARAM_INVERTER_LADESTROM_REDUZIEREN_ZELLSPG_STARTSPG PARAM_DT_U16
#define DT_ID_PARAM_INVERTER_LADESTROM_REDUZIEREN_ZELLSPG_ENDSPG PARAM_DT_U16
#define DT_ID_PARAM_INVERTER_LADESTROM_REDUZIEREN_ZELLSPG_MINDEST_STROM PARAM_DT_U8
#define DT_ID_PARAM_INVERTER_AUTOBALANCE_START_INTERVAL PARAM_DT_U8
#define DT_ID_PARAM_INVERTER_AUTOBALANCE_START_CELLVOLTAGE PARAM_DT_U16
#define DT_ID_PARAM_INVERTER_AUTOBALANCE_CHARGE_CELLVOLTAGE PARAM_DT_U16
#define DT_ID_PARAM_INVERTER_AUTOBALANCE_CELLDIF_FINISH PARAM_DT_U8
#define DT_ID_PARAM_INVERTER_AUTOBALANCE_TIMEOUT PARAM_DT_U16
#define DT_ID_PARAM_INVERTER_LADESTROM_REDUZIEREN_ZELLDRIFT_EN PARAM_DT_BO
#define DT_ID_PARAM_INVERTER_LADESTROM_REDUZIEREN_STARTSPG_ZELLE PARAM_DT_U16
#define DT_ID_PARAM_INVERTER_LADESTROM_REDUZIEREN_STARTABWEICHUNG PARAM_DT_U8
#define DT_ID_PARAM_INVERTER_LADESTROM_REDUZIEREN_A_PRO_MV PARAM_DT_U8
#define DT_ID_PARAM_INVERTER_LADESTROM_REDUZIEREN_SOC_EN PARAM_DT_BO
#define DT_ID_PARAM_INVERTER_LADESTROM_REDUZIEREN_AB_SOC PARAM_DT_U8
#define DT_ID_PARAM_INVERTER_LADESTROM_REDUZIEREN_A_PRO_PERCENT_SOC PARAM_DT_U8
#define DT_ID_PARAM_INVERTER_ENTLADESTROM_REDUZIEREN_ZELLSPG_STARTSPG PARAM_DT_U16
#define DT_ID_PARAM_INVERTER_ENTLADESTROM_REDUZIEREN_ZELLSPG_ENDSPG PARAM_DT_U16
#define DT_ID_PARAM_INVERTER_ENTLADESTROM_REDUZIEREN_ZELLSPG_MINDEST_STROM PARAM_DT_U8
#define DT_ID_PARAM_INVERTER_SOC_BELOW_ZELLSPANNUNG_EN PARAM_DT_BO
#define DT_ID_PARAM_INVERTER_SOC_BELOW_ZELLSPANNUNG_SPG PARAM_DT_U16
#define DT_ID_PARAM_INVERTER_SOC_BELOW_ZELLSPANNUNG_SPG_END PARAM_DT_U16
#define DT_ID_PARAM_INVERTER_SOC_BELOW_ZELLSPANNUNG_SOC PARAM_DT_U8
#define DT_ID_PARAM_INVERTER_SOC_BELOW_ZELLSPANNUNG_TIME PARAM_DT_U16
#define DT_ID_PARAM_INVERTER_CHARGE_VOLTAGE_DYNAMIC_REDUCE_EN PARAM_DT_BO
#define DT_ID_PARAM_INVERTER_CHARGE_VOLTAGE_DYNAMIC_REDUCE_ZELLSPG PARAM_DT_U16
#define DT_ID_PARAM_INVERTER_CHARGE_VOLTAGE_DYNAMIC_REDUCE_DELTA PARAM_DT_U8
#define DT_ID_PARAM_INVERTER_CHARGE_CURRENT_CUT_OFF_TIME PARAM_DT_U16
#define DT_ID_PARAM_INVERTER_CHARGE_CURRENT_CUT_OFF_CURRENT PARAM_DT_FL
#define DT_ID_PARAM_INVERTER_CHARGE_CURRENT_CUT_OFF_START_VOLTAGE PARAM_DT_U16
#define DT_ID_PARAM_INVERTER_CHARGE_CURRENT_CUT_OFF_SOC PARAM_DT_U8
#define DT_ID_PARAM_TRIGGER_AT_SOC PARAM_DT_U8
#define DT_ID_PARAM_TRIGGER_AT_SOC_ON PARAM_DT_U8
#define DT_ID_PARAM_TRIGGER_AT_SOC_OFF PARAM_DT_U8
#define DT_ID_PARAM_NEEY_CELLS PARAM_DT_U8
#define DT_ID_PARAM_NEEY_START_VOLTAGE PARAM_DT_FL
#define DT_ID_PARAM_NEEY_MAX_BALANCE_CURRENT PARAM_DT_FL
#define DT_ID_PARAM_NEEY_SLEEP_VOLTAGE PARAM_DT_FL
#define DT_ID_PARAM_NEEY_EQUALIZATION_VOLTAGE PARAM_DT_FL
#define DT_ID_PARAM_NEEY_BAT_CAPACITY PARAM_DT_U16
#define DT_ID_PARAM_NEEY_BAT_TYPE PARAM_DT_U8
#define DT_ID_PARAM_NEEY_BALANCER_ON PARAM_DT_U8
#define DT_ID_PARAM_JBD_CELL_VOLTAGE_100 PARAM_DT_U16
#define DT_BPN_SETTINGS_ALARM_RELAIS1_MODE PARAM_DT_U8
#define DT_BPN_SETTINGS_ALARM_RELAIS2_MODE PARAM_DT_U8
#define DT_BPN_SETTINGS_ALARM_RELAIS_CELL_VOLTAGE PARAM_DT_U8
#define DT_BPN_SETTINGS_ALARM_RELAIS_BATTERY_VOLTAGE PARAM_DT_U8
#define DT_BPN_SETTINGS_ALARM_RELAIS_CHARGE_CURRENT PARAM_DT_U8
#define DT_BPN_SETTINGS_ALARM_RELAIS_DISCHARGE_CURRENT PARAM_DT_U8
