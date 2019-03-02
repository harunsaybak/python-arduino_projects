"""
import threading
from time import sleep

a=5
b=4
c=0
# metot ile kullanımı
def thread_metot(ne):
	print("{} için thread başladı Thread: {}".format(ne, threading.current_thread()))
	c=a+b
	print(c)
	a = a + 1
	sleep(2)
	print("{} için thread bitti".format(ne))





for i in range(10):
	print("harun")

	thread_m = threading.Thread(target=thread_metot, args=("metotlu kullanım",))
	thread_m.start()

"""
"""
veri=1
#-*-coding:utf-8-*-
from time import sleep, strftime
from threading import Thread


def bastir(deger, sure, adet,aa):
	aa=6
	print("Başlayan Değer:",deger)
	while adet > 0:
		sleep(sure)
		print(deger," | ",strftime("%H:%M:%S"))
		adet -= 1
	return aa


#t2 = Thread(target=bastir, args=("CODERLAB Bilişim", 3,2))


#t2.start()




t1=Thread(target=bastir, args=("Emre Geldegul Blog", veri, 3,5))
t1.start()

xx=t1.join()
print(xx)

"""
"""
from multiprocessing.pool import ThreadPool
import time

def foo(bar, baz,adet):
	while adet>0:
		print('hello {0}'.format(bar))
		time.sleep(2)
		adet=adet-1
	return(adet,baz)

pool = ThreadPool(processes=2)

async_result = pool.apply_async(foo, ('world', 'foo',3)) # tuple of args for foo

# do some other stuff in the main process

return_val = async_result.get()  # get the return value from your function.

print(return_val)
print("hehehhehe")

"""

import datetime
import time
start =datetime.datetime.now().microsecond
for i in range(4):
	time.sleep(0.3)

end = datetime.datetime.now().microsecond

elpased= end -start
print(elpased)
x=str(elpased)
print(x)