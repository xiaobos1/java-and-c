package com.xiaobo.lian;

import java.util.Arrays;
import java.util.Comparator;

public class MyGirl {
    public static void main(String[] args) {
        GirlFriend girl1=new GirlFriend("xiaoshishi",1.67,19);
        GirlFriend girl2=new GirlFriend("xiaolele",1.66,20);
        GirlFriend girl3=new GirlFriend("xiaobeobei", 1.58,18);
        //将女朋友放入女朋友数组
        GirlFriend[] friends={girl1,girl2,girl3};

        //
        Arrays.sort(friends, new Comparator<GirlFriend>() {
            @Override
            public int  compare(GirlFriend o1, GirlFriend o2) {
                double temp=o1.getAge()- o2.getAge();

                temp=temp==0?o1.getHeight()-o2.getHeight():temp;
                temp=temp==0?o1.getName().compareTo(o2.getName()):temp;
                if(temp>0){
                    return 1;
                }else if(temp<0){
                    return -1;
                }else{
                    return 0;
                }
            }
        });
        for (int i = 0; i < friends.length; i++) {
            GirlFriend f=friends[i];
            System.out.println(f.getName()+" ,"+f.getHeight()+","+f.getAge());
        }
    }
}
