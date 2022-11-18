package com.itxiao.Test003;

import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class SellTicket implements Runnable{
    private int ticket=100;
    /*
        Lock锁
     */
    private Lock lock=new ReentrantLock();

    @Override
    public void run() {
        while(true) {
            try {
                //添加锁
                lock.lock();
                if (ticket > 0) {
                    try {
                        Thread.sleep(100);

                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                    System.out.println(Thread.currentThread().getName() + "正在出售第" + ticket + "张票");
                    ticket--;
                }
            }finally{
                //释放锁
                lock.unlock();
            }
        }
    }
}
