package com.xiaofinally;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;

public class FinallyTest01 {
    public static void main(String[] args) throws Exception {
        File file =new File("hello.txt");
        FileInputStream fis= null;

        fis = new FileInputStream(file);

        int data=fis.read();
        while(data !=-1) {
            System.out.println((char)data);
            data=fis.read();
        }
        fis.close();
    }
}
