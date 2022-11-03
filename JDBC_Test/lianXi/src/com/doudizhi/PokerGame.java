package com.doudizhi;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.TreeSet;

public class PokerGame {
    static HashMap<Integer,String> hm=new HashMap<>();
    static ArrayList<Integer> list=new ArrayList<>();
    static {
        //牌包
        String[] color = {"♠", "♣", "♥", "♠"};
        String[] number = {"3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2"};
        int serialNumber=1;
        for (String n:number) {
            for(String c:color){
                hm.put(serialNumber,c+n);
                list.add(serialNumber);
                serialNumber++;
            }
        }
        hm.put(serialNumber,"大王");
        list.add(serialNumber);
        serialNumber++;
        hm.put(serialNumber,"小王");
        list.add(serialNumber);
    }

    public PokerGame(){
        //洗牌
        Collections.shuffle(list);

        //发牌
        TreeSet<Integer> lord=new TreeSet<>();
        TreeSet<Integer> player1=new TreeSet<>();
        TreeSet<Integer> player2=new TreeSet<>();
        TreeSet<Integer> player3=new TreeSet<>();

        for (int i = 0; i < list.size(); i++) {
            Integer  serialNumber=list.get(i);

            if(i<=2){
                lord.add(serialNumber);
                continue;
            }
            if(i%3==0){
                player1.add(serialNumber);
            }else if(i%2==1){
                player2.add(serialNumber);
            }else{
                player3.add(serialNumber);
            }
        }
        //System.out.println(lord);
        lookPoker("底牌",lord);
        //System.out.println(player1);
        lookPoker("车友车行",player1);
        //System.out.println(player2);
        lookPoker("发哥",player2);
        //System.out.println(player3);
        lookPoker("卢本伟",player3);
    }
    public void lookPoker(String name,TreeSet<Integer> ts){
        System.out.print(name+" ");
        for(int serialNumber:ts){
            String poker=hm.get(serialNumber);
            System.out.print(poker+" ");
        }          

        System.out.println();
    }
}
