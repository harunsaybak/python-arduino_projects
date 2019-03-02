import serial
import time
# 1 değeri yollayalım.
deger = 1
# COM3 portuna bağlan.
serialport = serial.Serial('/dev/ttyACM0', 9600,timeout=5)
time.sleep(2)
# deger'i yolla.
while True:
    serialport.flush()
    serialport.write(deger)
    time.sleep(1)

# Bağlantı kapa.

# yanitları oku
#while True:
 #   print(serialport.readline())