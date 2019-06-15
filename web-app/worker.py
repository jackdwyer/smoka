# polls power stats from HS110 and writes to file

from pyHS100 import SmartPlug
import time

SMART_PLUG_HOST = "172.28.4.108"

plug = SmartPlug(SMART_PLUG_HOST)

while True:
    data = plug.get_emeter_realtime()
    voltage_mv = data['voltage_mv']
    current_ma = data['current_ma']
    power_mw = data['power_mw']
    total_wh = data['total_wh']
    msg = f"{int(time.time())}, {voltage_mv}, {current_ma}, {power_mw}, {total_wh}"
    print(msg)
    with open("results.csv", "a") as f:
        f.write(f"{msg}\n")
    time.sleep(1)
