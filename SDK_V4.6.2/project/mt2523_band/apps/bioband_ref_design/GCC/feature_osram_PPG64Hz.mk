ifeq ($(PROJ_PATH),)
include feature.mk
else
include $(PROJ_PATH)/feature.mk
endif

MTK_SENSOR_BIO_MODULE = OSRAM
HR_PPG_128HZ = n
HR_PPG_64HZ = y

# bt module enable
MTK_BT_ENABLE                       = y
MTK_BLE_ONLY_ENABLE                 = n
MTK_BT_HFP_ENABLE                   = n
MTK_BT_AVRCP_ENABLE                 = n
MTK_BT_AVRCP_ENH_ENABLE             = n
MTK_BT_A2DP_ENABLE                  = n
MTK_BT_PBAP_ENABLE                  = n
MTK_BT_SPP_ENABLE                   = y
