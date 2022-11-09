package com.xiaobo.team;

import java.io.*;

public class BufferStreamDEMO{
    public static void main(String[] args) throws IOException {
//        //创建字节缓冲输入流
//        BufferedOutputStream bos=new BufferedOutputStream(new FileOutputStream("Project11_6Day\\bos.txt"));
//       //写数据
//        bos.write("hello\r\n".getBytes());
//        bos.write("world\r\n".getBytes());
//        //清除
//        bos.close();

        //创建字节缓冲输出流
        BufferedInputStream bis=new BufferedInputStream(new FileInputStream("Project11_6Day\\bos.txt"));
        //一次读一个字节的数据
        byte[] by=new byte[1024];
        int len;
        while((len=bis.read(by)) !=-1) {
            System.out.println(new String(by,0,len));
        }
//        int by;
//        while((by=bis.read())!= -1) {
//            System.out.println((char)by);
//        }
        bis.close();
    }
}


