using System;
using System.Collections.Generic;

 namespace Dcoder
 {
   public class Program
   {
     public static void Main(string[] args)
     {

String nama,conf;
        int harga=0, lama, tipe;
        
        Scanner input = new Scanner(System.in);
        
        System.out.print("Masukan Nama Pemesan: ");
        nama = input.nextLine();
        System.out.print("Tipe kamar: ");
        tipe = input.nextInt();
        System.out.print("Lama menginap: ");
        lama = input.nextInt();
        
        if(tipe==1) {
            if(lama >5){
                harga = 80000 * lama;
            } else if (lama >=3){
                harga = 90000 * lama;
            } else {
                harga = 100000 * lama;
            }
        }
        
        if(tipe==2) {
            if(lama > 5) {
                harga = 120000 * lama;
            } else if (lama >=3){
                harga = 135000 * lama;
            } else {
                harga = 150000 * lama;
            }
        }
        
        if(tipe==3) {
            if(lama > 5) {
                harga = 160000 * lama;
            } else if(lama >=3) {
                harga = 180000 * lama;
            } else {
                harga = 200000 * lama;
            }
        }
        
        System.out.println("Masukkan nama pemesan: "+nama);
        System.out.println("Pilih tipe kamar: "+tipe);
        System.out.println("Lama menginap: "+lama);
        System.out.println("Total harga: "+harga);
        System.out.println("ingin memesan lagi? (y/n) : ");
        conf = input.next();
        switch (conf) {
            case "y":
                JavaApplication9.main(args);
                break;
            case "n":
                System.out.println("Exit..");
                break;
            default:
                System.out.println("Tidak ada pilihan");
                break;
            }
        }
      }
   }
