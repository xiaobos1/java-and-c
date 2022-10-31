package com.xiaoboMap;

import java.util.*;

public class MapTest {
    public static void main(String[] args) {
        /*
            某个班有80人，现在需要组成秋游活动
            班长提供了四个景点（A,B,C,D),
            每个学生只能选一个景点，统计出其中最多的投票景点
         */
        //创建一个数组
        String[] arr={"A","B","C","D"};
        //利用随机数来模拟学生投票
        ArrayList<String> list=new ArrayList<>();
        Random r=new Random();
        for (int i = 0; i < 80; i++) {
            int index=r.nextInt(arr.length);
            list.add(arr[index]);
        }
        HashMap<String,Integer> hm=new HashMap<>();
        for(String name:list){
            if(hm.containsKey(name)){
                int count=hm.get(name);
                count++;
                hm.put(name,count);
            }else{
                hm.put(name,1);
            }
        }
        System.out.println(hm);

        //获取最大值
        int max=0;
        Set<Map.Entry<String,Integer>> entries=hm.entrySet();
        for (Map.Entry<String,Integer> entry:entries){
            int count=entry.getValue();
            if(count > max){
                max=count;
            }
        }
        System.out.println(max);

        for (Map.Entry<String,Integer> entry:entries){
            int count=entry.getValue();
            if(count==max){
                System.out.println(entry.getKey());
            }
        }


    }
}
