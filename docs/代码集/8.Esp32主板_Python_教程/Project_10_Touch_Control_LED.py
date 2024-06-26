# 导入 Pin 和 time 库.
from machine import Pin
import time 
 
# 定义电容触摸传感器和led的引脚. 
sensor_touch = Pin(15, Pin.IN)
led = Pin(2, Pin.OUT)

while True: 
      value = sensor_touch.value()
      if value == 1:
          print("1  ALARM! Touch detected!")
          led.value(1)
          time.sleep(0.5)
          led.value(0)
          time.sleep(0.5)         
      else:
          led.value(0)