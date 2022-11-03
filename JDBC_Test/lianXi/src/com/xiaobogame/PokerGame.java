package com.xiaobogame;

import java.util.ArrayList;
import java.util.Collections;

public class PokerGame {

//        //准备牌
//        String[] color = {"♠", "♣", "♥", "♠"};
//        String[] number = {"3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2"};

        //牌盒
      static ArrayList <String> list = new ArrayList<>();
    static {
        String[] color = {"♠", "♣", "♥", "♠"};
        String[] number = {"3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A", "2"};
        for (String c : color) {
            //c表示每一种颜色
            for (String n : number) {
                //每一个数字
                list.add(c + n);//将颜色和数字组合起来，例如♥3 ♥4
            }
        }
        list.add("小王");
        list.add("大王");
    }
    public PokerGame() {
            //洗牌
        Collections.shuffle(list);

        //创建三个玩家数组和一个底牌数组
        ArrayList<String> player1=new ArrayList<>();
        ArrayList<String> player2=new ArrayList<>();
        ArrayList<String> player3=new ArrayList<>();
        ArrayList<String> lord=new ArrayList<>();

        //发牌
        for (int i = 0; i < list.size(); i++) {
            //i索引
            String poker=list.get(i);
            //放三张底牌
            if(i<=2){
                lord.add(poker);
                continue;
            }
            //给三个玩家发牌i%3 0 1 2三种情况
            if(i%3==0){
                player1.add(poker);
            }else if(i%3==1){
                player2.add(poker);
            }else{
                player3.add(poker);
            }
        }
        //查看
        lookPoker("底牌",lord);
        lookPoker("车友车行",player1);
        lookPoker("大帅哥",player2);
        lookPoker("发哥",player3);
     }

     /*
     *   每一位玩家的名字
     *   个位玩家的牌
      */
     public void lookPoker(String name,ArrayList<String> poker){
         System.out.print(name+" ");
        for(String p:poker){
            System.out.print(p+" ");
        }
         System.out.println();
     }

}
