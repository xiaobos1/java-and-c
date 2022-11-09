package com.itxiaobo.team.service;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

public class FileInputStreamDemo {
    public static void main(String[] args) throws IOException {
        FileInputStream fis = new FileInputStream("Project11_6Day\\fos.txt");

//        int by = fis.read();
//        System.out.println(by);
//        System.out.println((char) by);
//
//        int by2=fis.read();
//        System.out.println(by2);
//        System.out.println((char)by2);
/**
        int by=fis.read();
        while(by !=-1){
            System.out.println(by);
      -1      by = fis.read();
        }
**/
        int by;
        while((by=fis.read()) !=-1){
            System.out.println(
                    (char)by
            );
        }
        fis.close();
    }
}