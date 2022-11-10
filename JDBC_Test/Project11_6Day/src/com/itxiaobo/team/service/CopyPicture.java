package com.itxiaobo.team.service;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class CopyPicture {
    public static void main(String[] args) throws IOException {
        //创建字节输入流对象
        FileInputStream fis=new FileInputStream("F:\\xiaobo\\javaSE//mn.jpg");

        //创建字节输出流
        FileOutputStream fos=new FileOutputStream("Project11_6Day\\mn.jpg");

        byte[] bys=new byte[1024];
        int len;
        while((len=fis.read(bys))!=-1)
        {
            fos.write(bys,0,len);
        }
        fis.close();
        fos.close();
    }
}
