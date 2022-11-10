package com.xiaobo.team;

import java.io.*;

public class JavaCopy {
    public static void main(String[] args) throws IOException {
        //根据数据源创建字符输入流对象
        InputStreamReader isr=new InputStreamReader(new FileInputStream("Project11_6Day\\src\\com\\atxiaobo\\team\\domain\\FileDemo.java"));
        //创建数据字符输出流对象
        OutputStreamWriter osw=new OutputStreamWriter(new FileOutputStream(("Project11_6Day\\java.txt")));

        char[] ars=new char[1024];
        int len;
        while((len=isr.read(ars)) !=-1) {
            osw.write(ars,0,len);
        }
        isr.close();
        osw.close();
    }
}
