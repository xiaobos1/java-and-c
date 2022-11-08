"""
写一个Pyhon
消息群发
"""
from wxauto import WeChat

wx=WeChat()
# 获取当前客户端

wx.GetSessionList()

name =[["简风"],["baci"]]
msg=",这是我的测试"
contents=r"F://pythonTest//day01.py"
for i in name:
    who=i[0]
    message=i[0]+msg
    wx.ChatWith(who)
    wx.SendMsg(message)
    wx.SendFiles(contents)
    print(i[0],"发送成功")

print("程序结束")

