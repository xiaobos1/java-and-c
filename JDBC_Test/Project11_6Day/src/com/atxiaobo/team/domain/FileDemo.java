package com.atxiaobo.team.domain;

import java.io.File;
import java.io.IOException;


public class FileDemo {
    public static void main(String[] args) throws IOException {
        //我要字E：//xiaobo目录下创建一个java.txt文件
        //文件不存在就创建文件，并返回true
          File f1=new File("F://xiaobo//java2.txt");
          System.out.println(f1.createNewFile());
       System.out.println("-------------------------------");

       //创建目录
       File f2=new File("F://xiaobo//JavaSE");  //文件存在，就不创建文件，并返回false

        System.out.println(f2.mkdir());
        System.out.println("-------------------------------");

        //创建多级目录
        File f3=new File("F://xiaobo//JavaWEB//HTML");
        System.out.println(f3.mkdirs());

    }
}
