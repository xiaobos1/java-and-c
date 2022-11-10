package com.itxiaobo.team.service;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;

public class FileOutputDemo1 {
    public static void main(String[] args) throws IOException {
        FileOutputStream fos=new FileOutputStream("Project11_6Day\\fos.txt");

       // FileOutputStream fos1=new FileOutputStream(new File)
        File file =new File("Project11_6Day\\fos.txt", String.valueOf(true));

       // FileOutputStream fos2=new FileOutputStream()
//        fos.write(98);
//        fos.write(99);
//        fos.write(100);
//        fos.write(102);

        for (int i=0;i<10;i++){
            byte[] b ="97".getBytes();
            fos.write(b);
            fos.write("\r\n".getBytes());
        }
        fos.close();
    }
}
