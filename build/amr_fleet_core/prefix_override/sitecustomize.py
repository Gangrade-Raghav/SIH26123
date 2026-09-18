import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/raghav/Downloads/NRDAS_Antigravity_Project_Starter/antigravity_amr_project/install/amr_fleet_core'
