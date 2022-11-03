package com.xiaobocolls;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Random;

public class Test3 {
    public static void main(String[] args) {
        //新建集合
        ArrayList<String> list=new ArrayList<>();
        //添加班级学生姓名
        Collections.addAll(list,"范闲","范建","范统","杜紫藤","杜齐燕","宋河帆","侯龙腾","朱毅群","蔡徐坤","袁明园","汤加三勺");

        int count=list.size();
        //随机点名
        Random r=new Random();
        for (int i = 0; i < count; i++) {

            int index=r.nextInt(list.size());
            String s= list.remove(index);
            System.out.println(s);
        }

    }
}
