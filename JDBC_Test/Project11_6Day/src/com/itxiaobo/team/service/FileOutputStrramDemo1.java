package com.itxiaobo.team.service;

import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class FileOutputStrramDemo1 {
    public static void main(String[] args) throws IOException {
        //创建字节输出流对象
        FileOutputStream fos=new FileOutputStream("Project11_6Day\\fos.txt");
        /*
                A.调用了系统功能创建了文件
                B.创建了字节输出流对象
                C.让字节输出流对象指向创建好的文件
         */
        //将指定的字节写入此文件输出流
        fos.write(97);
        fos.write(98);
        fos.write(99);
        //释放资源
        fos.close();
    }
}
