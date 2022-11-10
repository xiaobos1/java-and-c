package com.itxiaobo.team.service;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class CopyTest {
    public static void main(String[] args) throws IOException {
        FileOutputStream fos =new FileOutputStream("Project11_6Day\\fos.txt");


        FileInputStream fis=new FileInputStream("Project11_6Day\\fos.txt");

        int by;
        while((by=fis.read()) !=-1){
            fos.write(by);
        }
        fos.close();
        fis.close();

    }
}
