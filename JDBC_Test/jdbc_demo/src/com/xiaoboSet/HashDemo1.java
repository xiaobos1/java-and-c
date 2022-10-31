package com.xiaoboSet;

public class HashDemo1 {
    public static void main(String[] args) {

        //创建Student对象
        Student stu=new Student("zhangsan",18);
        Student stu1=new Student("zhangsan",18);

        System.out.println(stu.hashCode());
        System.out.println(stu1.hashCode());


        /*
        小部分情况下不同属性值或者不同地址值计算出来的哈希值也可能一样
        这种情况叫哈希碰撞
         */
        System.out.println("abc".hashCode());
        System.out.println("abD".hashCode());
    }
}
