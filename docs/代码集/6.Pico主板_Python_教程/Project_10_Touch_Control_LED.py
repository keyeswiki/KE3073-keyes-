#导入引脚和时间模块
from machine import Pin  
import time   
 
# 定义电容触摸传感器，led的引脚
sensor_touch = machine.Pin(16, machine.Pin.IN)
led = machine.Pin(18, machine.Pin.OUT)
 
while True:
      value = sensor_touch.value()
      if value == 1:
          print("1  ALARM! Touch detected!")
          led.value(1)
          time.sleep(0.2)
          led.value(0)
          time.sleep(0.2)         
      else:
          led.value(0)