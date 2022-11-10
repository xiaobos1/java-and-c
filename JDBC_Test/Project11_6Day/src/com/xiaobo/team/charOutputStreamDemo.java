package com.xiaobo.team;

import java.io.*;

public class charOutputStreamDemo {
    public static void main(String[] args) throws IOException {
        //创建一个字符流
        OutputStreamWriter os=new OutputStreamWriter(new FileOutputStream("Project11_6Day\\os.txt")) ;
        //void write 写数据
        char[] ars={'H','e','l','l','o','\n'};
        os.write(ars);

//        os.write(98);
//
//        os.flush();
//        os.write(98);
//        os.flush();
//
//        os.write(98);

        os.close();
    }
}
