"""score=input("请输入你的分数(0~100):")
score =int(score)

if score>=90 :
    print('A')
elif score >=80 :
    print('B')
elif score>= 60:
    print('C')
elif score >=10 :
    print('D')
else:
    print("来我办公室一趟")

  
score = 66

level=('D' if  0<=score<60 else
       'C' if  60<=score<80 else
       'B' if  80<=score<90 else
       'A' if  90<=score<100 else
       'ss'if  score == 100 else
       "请输入0~100以内的数")
print(level)



c=0      
while 1:
    yes=input("我是你爹地 (是/否)")
    if yes=="是":
        print("不愧是我的好大儿")
        break
    c=c+1


day =1
hour =1
while day <=7 :
    while hour<=8 :
        print("今天我一定要学习8个小时")
        hour +=1
        if hour>1 :
            break

    day +=1



for each in "finshc":
    print(each)

i=0
sum=0
for i in range(1,101) :
    sum +=i

print(sum)

"""
""" 寻找100以内的素数"""
"""
for i in range(100,1001) :
    for j in range(100,i):
        if i%j==0 :
            break
    else :
        print(i)


for i in range(100,1000):
    for j in range (2,i):
        if i%j==0 :
            break
    if(i==j):
        print(i)
    
 """

"""

"""   求100到999素数   """
sum=0
for i in range(100,1000):
    for j in range(2,i+1):
        if i%j==0 :
            break
    if i==j :
        print(i)
        sum +=1

print(sum)#素数的总和
        
"""


"""回文数"""
x="12321"
print(x)
x=x[::-1]
print(x)



























































