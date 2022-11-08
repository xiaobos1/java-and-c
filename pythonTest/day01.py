"""用Pyhon创建第一个游戏"""
import random
answer=random.randint(1,10)
a=3
while a :  
  a=a-1
  temp=input("猜一下我现在心里想的数字是哪个:")
  guess=int(temp)
  if guess ==answer:
       print("你是小甲鱼心中的蛔虫吗")
       print("哼猜中也没有奖励！")
       break
  else:
       if guess >answer:
           print("大了")
       else:
           print("小了")

print("游戏结束，不玩了^_^")
