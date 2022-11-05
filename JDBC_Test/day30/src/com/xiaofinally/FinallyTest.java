package com.xiaofinally;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

public class FinallyTest {
    public static void main(String[] args) {
        FileInputStream fis=null;
        try{
            File file=new File("hello.txt");
            fis=new FileInputStream(file);

            int data =fis.read();
            while(data !=-1){
                System.out.println((char)data);
                data=fis.read();
            }
        }catch(FileNotFoundException e){
            e.printStackTrace();
        }catch(IOException e){
            e.printStackTrace();
        }finally{
            try {
                fis.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
//        try{
//            int a=10;
//            int b=0;
//            System.out.println(a/b);
//        }catch(ArithmeticException e){
//            e.printStackTrace();
//        }catch(Exception e){
//            e.printStackTrace();
//        }finally{
//            System.out.println("我好帅啊");
//        }
    }
}
