package com.xiaobo;

import java.util.Scanner;
import  java.util.*;
public class CMUtility {
    private static Scanner scanner=new Scanner(System.in);
    /*
    用于界面菜单的选择，该方法读取键盘，如果用书输入1—5返回方法
     */
    public static char readMenuSelection(){
        char c;
        for(;;){
            String str =readKeyBoard(1,false);
            c=str.charAt(0);
            if(c!='1' &&c!='2' &&c!='3' &&c!='4' &&c!='5' ){
                System.out.println("输入错误请重新输入");
            }else break;
        }
        return c;
    }
    //键盘读取一个字符，并将其作为方法的返回值
    public static char readChar(){
        String str=readKeyBoard(1,false);
        return str.charAt(0);
    }
    //从键盘读取一个字符，如果用户不输入字符而直接回车，方法将以defaultValue
    public  static char readChar(char defaultValue){
        String str=readKeyBoard(1,true);
        return (str.length()==0)?defaultValue:str.charAt(0);
    }
    //键盘读取一个俩位的整数，并将其返回
    public static int rendInt(){
        int n=0;
        for(;;){
            String str=readKeyBoard(2,false);
            try{
                n=Integer.parseInt(str);
                break;
            }catch(NumberFormatException e){
                System.out.println("数字输入不合法");
            }
        }
        return n;
    }
    public static int readInt(int defaultValue){
        int n;
        for(;;){
            String str=readKeyBoard(2,true);
            if(str.equals(" ")){
                return defaultValue;
            }
            try{
                n=Integer.parseInt(str);
                break;
            }catch(NumberFormatException e){
                System.out.println("输入错误");
            }
        }
       return n;
    }

    public static String readString(int limit){
        return readKeyBoard(limit,false);
    }
    public static String readString(int limit,String defaultValue){
        String str=readKeyBoard(limit,true);
        return str.equals("")?defaultValue:str;
    }
    //用于确认选择输入。该方法从键盘读取 Y/N ，并将其做返回值
    public static char readConfirmSelection(){
        char c;
        for(;;){
            String str=readKeyBoard(1,false).toUpperCase();
            c=str.charAt(0);
            if(c=='Y'|| c =='N'){
                break;
            }else{
                System.out.println("输入错误");
            }
        }
        return c;
    }
    private static String readKeyBoard(int limit,boolean blankRetur){
        String line="";
        while(scanner.hasNextLine()){
            line=scanner.nextLine();
            if(line.length()==0){
                if(blankRetur) return line;
                else continue;
            }
            if(line.length()<1 || line.length()>limit){
                System.out.println("输入长度不大于"+limit+" 错误重新输入");
                continue;
            }
            break;
        }
        return line;
    }
}
