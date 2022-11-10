package com.xiaobo.team;

import java.io.BufferedWriter;
import java.io.FileInputStream;
import java.io.FileWriter;
import java.io.IOException;

public class Test1 {
    public static void main(String[] args) throws IOException {
        //字符缓冲流
        //FileInputStream fis=new FileInputStream("Project11_6Day\\1.txt");
//        FileWriter fw=new FileWriter("Project11_6Day\\1.txt");
//        BufferedWriter bw=new BufferedWriter(fw);
        BufferedWriter bw=new BufferedWriter(new FileWriter("Project11_6Day\\1.txt"));
        bw.write("hello\r\n");
        bw.write("world");

        bw.close();
    }
}
