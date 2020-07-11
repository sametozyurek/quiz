#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<unistd.h>
#include<cstdlib>
#include<fstream>
using namespace std;
int main () {
    system("color 70");
    string ad;
    int secim;
 float nu,ci;
 nu=2; ci=1;
char cift,jok,jo,cos,c,ka,s1,s2,s3,s4,s5,s6,s7,s8,s9,s11,s22,s33,s44,s55,s66,s77,s88,s99,s12,s13,s14,s15,s16,s17,s18,s19,s21,s32,s23,s24,s25,s26,s27,s28,s29,s31;
   
   
    cout<<"Bilgi Yarismamiza Hosgeldiniz.";
    cout<<endl;
     
    cout<<"Lutfen Adinizi Giriniz:";
    cin>>ad;
   
    ba:
            cout<<endl;
    cout<<"Cinsiyetinizi Giriniz (e/k):";
    cin>>c;
    if (c=='e' || c=='E') {
               cout<<"Hosgeldiniz "<<ad<< " Bey.";
               }
              
      else if (c=='k' || c=='K') {
                    cout<<"Hosgeldiniz "<<ad<< " Hanim.";
                    }
                    else {
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ba;
                         }
                         basa:
                         cout<<endl;
                         cout<<"Lutfen Yarismak istediginiz Katagoriyi Secin.";
                         cout<<endl;
                         cout<<"1)-Din Kulturu.";
                         cout<<endl;
                         cout<<"2)-Genel Kultur.";
                         cout<<endl;
                         cout<<"3)-Cografya";
                         cout<<endl;
                         cout<<"4)-Muzik";
                         cout<<endl;
                         cout<<"5)-Fen";
                         cout<<endl;
                         cout<<"6)-Spor";
                         cout<<endl;
                         cin>>ka;
                         
                         if (ka=='1'){
                                    cout<<"Sectiginiz Katagori Din Kulturu.";
                                    cout<<endl;
                                    cout<<"Din Kulturu Sorulariniz Geliyor... Hazir Olun.";
                                    cout<<endl;
                                    Sleep(1500);
                                    goto din;
                                    }
                                    else if (ka=='2') {
                                         cout<<"Sectiginiz Katagori Genel Kultur.";
                                    cout<<endl;
                                    cout<<"Genel Kultur Sorulariniz Geliyor... Hazir Olun.";
                                    cout<<endl;
                                         goto ge;
                                         }
                                         else if (ka=='3') {
                                         cout<<"Sectiginiz Katagori Cografya.";
                                    cout<<endl;
                                    cout<<"Cografya Sorulariniz Geliyor... Hazir Olun.";
                                    cout<<endl;
                                    goto cog;
                                         
                                         }
                         else if (ka=='4') {
                                         cout<<"Sectiginiz Katagori Muzik.";
                                    cout<<endl;
                                    cout<<"Muzik Sorulariniz Geliyor... Hazir Olun.";
                                    cout<<endl;
                                         goto muz;
                                         }
                                         else if (ka=='5') {
                                         cout<<"Sectiginiz Katagori Fen.";
                                    cout<<endl;
                                    cout<<"Fen Sorulariniz Geliyor... Hazir Olun.";
                                    cout<<endl;
                                    goto fen;
                                         
                                         }
                                         else if (ka=='6') {
                                         cout<<"Sectiginiz Katagori Spor.";
                                    cout<<endl;
                                    cout<<"Spor Sorulariiniz Geliyor... Hazir Olun.";
                                    cout<<endl;
                                    goto spor;
                                         
                                         }
                                         else {
                                              cout<<"Hatali Giris Yaptiniz.";
                                              goto basa;
                                              
                                              }
                                         cout<<endl;
                                         din:
                                         
                         cout<<"                  DIN KULTURU SORULARI ...";  
                         cout<<endl;
                            
                     ss1: 
                           cout<<endl;          
            cout<<"1)-Bir seye karar verme gucu nedir? ";
            cout<<endl;           
            cout<<"A)Iman    ";
            cout<<"B)Irade    ";
            cout<<"C)Akil    ";
            cout<<"D)Ahlak    ";  
            cout<<endl;
                  cout<<endl;   
                  ss11:     
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;                        
            if (jo=='E'||jo=='e') {               
                    cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";   
                           
                                                     
                                  cout<<endl;                                                                                                  
                      cout<<"B)Irade    ";
                      cout<<"D)Ahlak    "; 
                        
                        }  
                        
                       else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }           
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss11;
                         cout<<endl;                                                                           
                           }
            
             ce:                                
            cout<<"Cevabiniz==>";
            cin>>s1;
            cout<<endl;
            Sleep(1000);
            if(s1=='B'||s1=='b'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=05";
                                 cout<<endl;
                                 } 
                                 else if (s1=='A'||s1=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s1=='C'||s1=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s1=='D'||s1=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto ss1;
                                           
                                           } 
                                                                                                                                   
   cout<<endl;
   Sleep(1250);
   system("color 70");
   ss2:
       cout<<endl;
   cout<<"2)-Hac ibadeti sirasinda Kabe'nin etrafinda yedi kez donmeye ne denir?";                                                    
   cout<<endl;
            cout<<"A)Vakfe    ";
            cout<<"B)Ihram    ";
            cout<<"C)Sa'y    ";
            cout<<"D)Tavaf    ";  
            cout<<endl;                  
            ss12:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;                        
            if (jo=='E'||jo=='e') {               
                    cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";   
                           
                                                     
                                  cout<<endl;                                                                                                  
                      cout<<"B)Ihram    ";
                      cout<<"D)Tavaf    "; 
                        
                        }  
                        
                       else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }           
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss12;
                         cout<<endl;                                                                           
                           }
            
             
            cout<<"Cevabiniz==>";
            cin>>s2;
            cout<<endl;
            Sleep(1000);  
            if(s2=='D'||s2=='d'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik2.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=10";
                                 cout<<endl;
                                 } 
                                 else if (s2=='A'||s2=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s2=='C'||s2=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s2=='B'||s2=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto ss2;
                                           
                                           }  
    cout<<endl;
    Sleep(1250);                                       
    system("color 70");
   ss3:
       cout<<endl;
   cout<<"3)-Kiyamet gunu insanlarin toplanacaklari yerin adi nedir?";                                                    
   cout<<endl;
            cout<<"A)Mahser    ";
            cout<<"B)Sirat    ";
            cout<<"C)Mizan    ";
            cout<<"D)Kabir    ";  
            cout<<endl;   
            
            ss13:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                         cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";                                 
                                  
                                      cout<<endl;
                               if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto cev;
                                 
                               }
                               cout<<endl;                                                                                                  
                      cout<<"A)Mahser    ";
                      cout<<"D)Kabir    ";                                                       
                      }
                      
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                           
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss13;
                         cout<<endl;                                                                           
                           }
              cev:
            cout<<"Cevabiniz==>";
            cin>>s3;
            cout<<endl;
            Sleep(1000);  
            if(s3=='A'||s3=='a'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik3.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=15";
                                 cout<<endl;
                                 } 
                                 else if (s3=='b'||s3=='B'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s3=='c'||s3=='C'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s3=='d'||s3=='D'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto ss3;
                                           
                                           }  
 cout<<endl;
    Sleep(1250);                                       
    system("color 70");
   ss4:
       cout<<endl;
   cout<<"4)-Peygamberlerden kendilerine kitap verilenlere asagidaki isimlerden hangisi kullanilir?.";                                                    
   cout<<endl;
            cout<<"A)Nebi    ";
            cout<<"B)Enbiya    ";
            cout<<"C)Resul    ";
            cout<<"D)Habidullah    ";  
            cout<<endl; 
            ss14:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                 cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s444;
                                 
                               }
                 
                                 
                                  cout<<endl;                                                                                                  
                      cout<<"B)Enbiya    ";
                      cout<<"C)Resul    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss14;
                         cout<<endl;                                                                           
                           }
                s444:
            cout<<"Cevabiniz==>";
            cin>>s4;
            cout<<endl;
            Sleep(1000);  
            if(s4=='C'||s4=='c'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik4.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=20";
                                 cout<<endl;
                                 } 
                                 else if (s4=='A'||s4=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s4=='B'||s4=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s4=='D'||s4=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto ss4;
                                           
                                           }
cout<<endl;
    Sleep(1250);                                       
    system("color 70");
   ss5:
       cout<<endl;
   cout<<"5)-Asagidakilerden hangisi peygamberlerin ozelliklerinden degildir?";                                                    
   cout<<endl;
            cout<<"A)Sidk    ";
            cout<<"B)Emanet    ";
            cout<<"C)Keramet    ";
            cout<<"D)Ýsmet    ";  
            cout<<endl;   
            cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                 cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s555;   }            
                                  cout<<endl;                                                                                                  
                      cout<<"B)Emanet    ";
                      cout<<"C)Keramet    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss15;
                         cout<<endl;                                                                           
                           }
            
            s555:  
            cout<<"Cevabiniz==>";
            ss15:  
                   
            
            cin>>s5;
            cout<<endl;
            Sleep(1000);  
            if(s5=='C'||s5=='c'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik5.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=25";
                                 cout<<endl;
                                 } 
                                 else if (s5=='A'||s5=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s5=='B'||s5=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s5=='D'||s5=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto ss5;
                                           
                                           }                                            
cout<<endl;
    Sleep(1250);                                       
    system("color 70");
   ss6:
       cout<<endl;
   cout<<"6)-Peygamberler gunahsizdirlar,en zeki insanlardir,cok dogru insanlaridir.Asagidakilerden hangisi sifatlarin sirasine gore dizilmistir?";                                                    
   cout<<endl;
            cout<<"A)Fetanet, Ismet, Teblig    ";
            cout<<"B)Ismet, Fetanet, Sidk    ";
            cout<<"C)Teblig,Ismet,Fetanet    ";
            cout<<"D)Sidk, Emanet, Teblig    ";  
            cout<<endl;     
            ss16:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s666;     }           
                                  cout<<endl;                                                                                                  
                      cout<<"B)Ismet, Fetanet, Sidk    ";
                      cout<<"C)Teblig,Ismet,Fetanet    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss16;
                         cout<<endl;                                                                           
                           }
            s666:
            cout<<"Cevabiniz==>";
            cin>>s6;
            cout<<endl;
            Sleep(1000);  
            if(s6=='B'||s6=='b'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik6.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=30";
                                 cout<<endl;
                                 } 
                                 else if (s6=='A'||s6=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s6=='C'||s6=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s6=='D'||s6=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      system("cls");
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto ss6;
                                           
                                           } 
                                           cout<<endl;
             system("color 70");
                                           cout<<endl;
                                           cout<<"TEBRIKLER DIN KULTURU SORULARINI BASARIYLA CEVAPLADINIZ.";
                                           sec:
                                               cout<<endl;
                                           cout<<"BASKABIR KATAGORIDE YARISMAK ISTERMISINIZ?(E/H)";
                                           cin>>cos;
                                           
                                           if (cos=='E'||cos=='e'){
                                                                   goto basa;
                                                                   }
                                                                   else if (cos=='H'||cos=='h'){
                                                                        goto enson;
                                                                        }
                                                                        else {
                                                                             cout<<"Hatali Giris Yaptiniz.";
                                                                             goto sec;
                                                                             }
                                           
                                         ge:
                                                      Sleep(1500);
                                         
                         cout<<"                  GENEL KULTUR SORULARI ...";  
                         cout<<endl;      
 ge1:
       cout<<endl;
   cout<<"1)-Tsunami Felaketinde En Fazla Zarar Goren Guney Asya Ulkesi Asagidakilerden Hangisidir?";                                                    
   cout<<endl;
            cout<<"A)Endonezya    ";
            cout<<"B)Srilanka    ";
            cout<<"C)Tayland    ";
            cout<<"D)Hindistan    ";  
            cout<<endl;     
            ss17:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s1112;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"A)Endonezya    ";
                      cout<<"C)Tayland    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss17;
                         cout<<endl;                                                                           
                           }
            s1112:
            cout<<"Cevabiniz==>";
            cin>>s7;
            cout<<endl;
            Sleep(1000);  
            if(s7=='A'||s7=='a'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 cout<<endl;                                                                 
                                 system("color 8A"); 
                                 PlaySound("dogrusik.wav",NULL,SND_FILENAME);                                
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=05";
                                 cout<<endl;
                                 } 
                                 else if (s7=='B'||s7=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s7=='C'||s7=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s7=='D'||s7=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto ge1;
                                           
                                           } 
                                           cout<<endl;                                                                                                                                                                          
cout<<endl;  
Sleep(1250);    
 ge2:
     
     system("color 70");
       cout<<endl;
   cout<<"2)-Mustafa Kemal Ataturk'un Nufusa Kayitli Olduðu Il Hangisidir?";                                                    
   cout<<endl;
            cout<<"A)Bursa    ";
            cout<<"B)Ankara    ";
            cout<<"C)Istanbul    ";
            cout<<"D)Gaziantep    ";  
            cout<<endl;     
            ss18:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s1113;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"A)Bursa    ";
                      cout<<"D)Gaziantep    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss18;
                         cout<<endl;                                                                           
                           }
            s1113:
            cout<<"Cevabiniz==>";            cin>>s8;
            cout<<endl;
            Sleep(1000);  
            if(s8=='D'||s8=='d'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik2.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=10";
                                 cout<<endl;
                                 } 
                                 else if (s8=='A'||s8=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s8=='B'||s8=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s8=='C'||s8=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto ge2;
                                           
                                           } 
                                           cout<<endl;                                         
 cout<<endl;                                                                                                                                                                          
cout<<endl;   
Sleep(1250);   
 ge3:
     
     system("color 70");
       cout<<endl;
   cout<<"3)-Hangi Ilimizde Demiryolu Yoktur?";                                                    
   cout<<endl;
            cout<<"A)Batman    ";
            cout<<"B)Kutahya    ";
            cout<<"C)Mugla    ";
            cout<<"D)Aydin    ";  
            cout<<endl;     
            ss19:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s1114;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"A)Batman    ";
                      cout<<"C)Aydin    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss19;
                         cout<<endl;                                                                           
                           }
            s1114:
            cout<<"Cevabiniz==>";
            cin>>s9;
            cout<<endl;
            Sleep(1000);  
            if(s9=='C'||s9=='c'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik3.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=15";
                                 cout<<endl;
                                 } 
                                 else if (s9=='A'||s9=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s9=='B'||s9=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s9=='D'||s9=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto ge3;
                                           
                                           } 
                                           cout<<endl;                                       
                      cout<<endl;                                         
 cout<<endl;                                                                                                                                                                          
cout<<endl;  
Sleep(1250);    
 ge4:
     
     system("color 70");
       cout<<endl;
   cout<<"4)-Cevdet Bey Ve Ogullari Eseri Kime Aittir? ";                                                    
   cout<<endl;
            cout<<"A)Yahya Kemal Bayatli    ";
            cout<<"B)Orhan Pamuk    ";
            cout<<"C)Atilla Ilhan    ";
            cout<<"D)Ahmet Hasim    ";  
            cout<<endl;  
            s44:   
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s1115;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"B)Orhan Pamuk    ";
                      cout<<"C)Atilla Ilhan    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto s44;
                         cout<<endl;                                                                           
                           }
            s1115:
            cout<<"Cevabiniz==>";
            cin>>s11;
            cout<<endl;
            Sleep(1000);  
            if(s11=='B'||s11=='b'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik4.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=20";
                                 cout<<endl;
                                 } 
                                 else if (s11=='A'||s11=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s11=='C'||s11=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s11=='D'||s11=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto ge4;
                                           
                                           } 
                                           cout<<endl;                                        
cout<<endl;                                       
                      cout<<endl;                                         
 cout<<endl;                                                                                                                                                                          
cout<<endl; 
Sleep(1250);     
 ge5:
     
     system("color 70");
       cout<<endl;
   cout<<"5)-Aspirinin Hammaddesi Nedir? ";                                                    
   cout<<endl;
            cout<<"A)Koknar    ";
            cout<<"B)Kavak    ";
            cout<<"C)Mese    ";
            cout<<"D)Sogut    ";  
            cout<<endl;     
            s45:   
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s1116;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"B)Kavak    ";
                      cout<<"D)Sogut    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto s45;
                         cout<<endl;                                                                           
                           }
            s1116:
            cout<<"Cevabiniz==>";
            cin>>s22;
            cout<<endl;
            Sleep(1000);  
            if(s22=='D'||s22=='d'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik.wav5",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=25";
                                 cout<<endl;
                                 } 
                                 else if (s22=='A'||s22=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s22=='B'||s22=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s22=='C'||s22=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto ge5;
                                           
                                           } 
                                            cout<<endl;                                         
cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 ge6:
     
     system("color 70");
       cout<<endl;
   cout<<"6)-Bir Gün Kaç Saniyedir? ";                                                    
   cout<<endl;
            cout<<"A)86000    ";
            cout<<"B)88600    ";
            cout<<"C)86400    ";
            cout<<"D)84800    ";  
            cout<<endl;     
            s46:   
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s1117;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"B)88600    ";
                      cout<<"C)86400    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto s46;
                         cout<<endl;                                                                           
                           }
            s1117:
            cout<<"Cevabiniz==>";
            cin>>s33;
            cout<<endl;
            Sleep(1000);  
            if(s33=='C'||s33=='c'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik.wav6",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=30";
                                 cout<<endl;
                                 } 
                                 else if (s33=='A'||s33=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s33=='B'||s33=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s33=='D'||s33=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto ge6;
                                           
                                           } 
                                           cout<<endl;  
                                           cout<<endl;
                                           system("color 70");
                                           cout<<endl;
                                           cout<<"TEBRIKLER GENEL KULTUR SORULARINI BASARIYLA CEVAPLADINIZ.";
                                           secc:
                                               cout<<endl;
                                           cout<<"BASKABIR KATAGORIDE YARISMAK ISTERMISINIZ?(E/H)";
                                           cin>>cos;
                                           
                                           if (cos=='E'||cos=='e'){
                                                                   goto basa;
                                                                   }
                                                                   else if (cos=='H'||cos=='h'){
                                                                        goto enson;
                                                                        }
                                                                        else {
                                                                             cout<<"Hatali Giris Yaptiniz.";
                                                                             goto secc;
                                                                             }
                                           
                                         cog:
                                             Sleep(1500);
                                         
                         cout<<"                  COGRAFYA SORULARI ...";  
                         cout<<endl;
 co1:
       cout<<endl;
   cout<<"1)-Turkiye'de yaz saati uygulamasinin yasandigi bir gunde Turkiye'nin milli saatinin Izmit'in yerel saatine gore durumu nedir?";                                                    
   cout<<endl;
            cout<<"A)1 saat geri    ";
            cout<<"B)2 saat geri    ";
            cout<<"C)1 saat ileri    ";
            cout<<"D)2 saat ileri    ";  
            cout<<endl;     
            ss20:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s221;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"A)1 saat geri    ";
                      cout<<"C)1 saat ileri    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss20;
                         cout<<endl;                                                                           
                           }
            s221:
            cout<<"Cevabiniz==>";
            cin>>s44;
            cout<<endl;
            Sleep(1000);  
            if(s44=='C'||s44=='c'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 cout<<endl;                                                                 
                                 system("color 8A"); 
                                 PlaySound("dogrusik.wav",NULL,SND_FILENAME);                                
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=05";
                                 cout<<endl;
                                 } 
                                 else if (s44=='B'||s44=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s44=='A'||s44=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s44=='D'||s44=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto co1;
                                           
                                           } 
                                           cout<<endl;  
cout<<endl;                                         
cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 co2:
     
     system("color 70");
       cout<<endl;
   cout<<"2)- Asagidakilerden hangisi enlemin etkilerinden biri degildir? ";                                                    
   cout<<endl;
            cout<<"A)Akarsu rejimi    ";
            cout<<"B)Yerel saat    ";
            cout<<"C)Dogal bitki ortusu    ";
            cout<<"D)Tarim urunleri cesitleri    ";  
            cout<<endl;   
            ss21:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s223;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"B)Yerel saat    ";
                      cout<<"C)Dogal bitki ortusu    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss21;
                         cout<<endl;                                                                           
                           }
              s223:
            cout<<"Cevabiniz==>";
            cin>>s55;
            cout<<endl;
            Sleep(1000);  
            if(s55=='B'||s55=='b'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik2.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=10";
                                 cout<<endl;
                                 } 
                                 else if (s55=='A'||s55=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s55=='C'||s55=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s55=='D'||s55=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto co2;
                                           
                                           } 
                                           cout<<endl;
cout<<endl;                                         
cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 co3:
     
     system("color 70");
       cout<<endl;
   cout<<"3)-Asagidakilerden  hangisi  21   Haziranda  gunes isinlarini daha egik bir aciyla alir?  ";                                                    
   cout<<endl;
            cout<<"A)Sam    ";
            cout<<"B)Konya    ";
            cout<<"C)Samsun    ";
            cout<<"D)Sinop    ";  
            cout<<endl;     
            ss22:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s224;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"A)Sinop    ";
                      cout<<"D)Sinop    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss22;
                         cout<<endl;                                                                           
                           }
            s224:
            cout<<"Cevabiniz==>";
            cin>>s66;
            cout<<endl;
            Sleep(1000);  
            if(s66=='D'||s66=='d'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik3.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=15";
                                 cout<<endl;
                                 } 
                                 else if (s66=='A'||s66=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s66=='B'||s66=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s66=='C'||s66=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto co3;
                                           
                                           } 
                                           cout<<endl;                                                                                                            
cout<<endl;                                         
cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 co4:
     
     system("color 70");
       cout<<endl;
   cout<<"4)-Asagýdaki hangi iki meridyen arasýndaki yerel saat farki en fazladir?";                                                    
   cout<<endl;
            cout<<"A)0-20d    ";
            cout<<"B)25d-13b    ";
            cout<<"C)80d-101d    ";
            cout<<"D)152b-175b    ";  
            cout<<endl;     
            s47:   
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s225;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"B)25d-13b    ";
                      cout<<"C)80d-101d    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto s47;
                         cout<<endl;                                                                           
                           }
            s225:
            cout<<"Cevabiniz==>";
            cin>>s77;
            cout<<endl;
            Sleep(1000);  
            if(s77=='B'||s77=='b'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik4.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=20";
                                 cout<<endl;
                                 } 
                                 else if (s77=='A'||s77=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s77=='C'||s77=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s77=='D'||s77=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto co4;
                                           
                                           } 
                                           cout<<endl;  
cout<<endl;                                         
cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 co5:
     
     system("color 70");
       cout<<endl;
   cout<<"5)-Asagidakilerden hangisi soguk yerel ruzgarlar arasinda kabul edilemez?";                                                    
   cout<<endl;
            cout<<"A)Samyeli    ";
            cout<<"B)Poyraz    ";
            cout<<"C)Bora    ";
            cout<<"D)Karayel    ";  
            cout<<endl;     
            s48:   
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s226;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"A)Samyeli    ";
                      cout<<"C)Bora    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto s48;
                         cout<<endl;                                                                           
                           }
            s226:
            cout<<"Cevabiniz==>";
            cin>>s88;
            cout<<endl;
            Sleep(1000); 
            if(s88=='A'||s88=='a'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik5.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=25";
                                 cout<<endl;
                                 } 
                                 else if (s88=='B'||s88=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s88=='C'||s88=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s88=='D'||s88=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto co5;
                                           
                                           } 
                                           cout<<endl;                                                                                                                            
cout<<endl;                                         
cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 co6:
     
     system("color 70");
       cout<<endl;
   cout<<"6)-Asagidakilerden hangisi iklimden etkilenmez?";                                                    
   cout<<endl;
            cout<<"A)Yagis rejimi    ";
            cout<<"B)Tarýmsal etkinlikler    ";
            cout<<"C)Yeralti zenginlikleri    ";
            cout<<"D)Yasama bicimi    ";  
            cout<<endl;     
            s49:   
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s227;     }           
                                  cout<<endl;                                                                                                   
                      cout<<"A)Yagis rejimi    ";
                      cout<<"C)Yeralti zenginlikleri    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto s49;
                         cout<<endl;                                                                           
                           }
            s227:
            cout<<"Cevabiniz==>";
            cin>>s99;
            cout<<endl;
            Sleep(1000); 
            if(s99=='C'||s99=='c'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik6.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=30";
                                 cout<<endl;
                                 } 
                                 else if (s99=='A'||s99=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s99=='B'||s99=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s99=='D'||s99=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto co6;
                                           
                                           } 
                                           system("color 70");
                                           cout<<endl;
                                           cout<<"TEBRIKLER COGRAFYA SORULARINI BASARIYLA CEVAPLADINIZ.";
                                           seccc:
                                               cout<<endl;
                                           cout<<"BASKABIR KATAGORIDE YARISMAK ISTERMISINIZ?(E/H)";
                                           cin>>cos;
                                           
                                           if (cos=='E'||cos=='e'){
                                                                   goto basa;
                                                                   }
                                                                   else if (cos=='H'||cos=='h'){
                                                                        goto enson;
                                                                        }
                                                                        else {
                                                                             cout<<"Hatali Giris Yaptiniz.";
                                                                             goto seccc;
                                                                             }
                                                        
                                                        cout<<endl;
                                         muz:
                                             Sleep(1500);
                                         
                         cout<<"                  MUZIK SORULARI ...";                                                                                                                                   
                                                
                                          
cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 muz1:
     
     system("color 70");
       cout<<endl;
   cout<<"1)-Onuncu Yil Marsi kim tarafýndan bestelenmistir?  ";                                                    
   cout<<endl;
            cout<<"A)Mithat Fenmen     ";
            cout<<"B)Necil Kazim Akses     ";
            cout<<"C)Cemal Resit Rey     ";
            cout<<"D)Osman Zeki Ungor    ";  
            cout<<endl;     
            
            ss23:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s3331;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"A)Mithat Fenmen    ";
                      cout<<"C)Cemal Resit Rey    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss23;
                         cout<<endl;                                                                           
                           }
                           s3331:
            cout<<"Cevabiniz==>";
            cin>>s12;
            cout<<endl;
            Sleep(1000); 
            if(s12=='C'||s12=='c'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=05";
                                 cout<<endl;
                                 } 
                                 else if (s12=='A'||s12=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s12=='B'||s12=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s12=='D'||s12=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto muz1;
                                           
                                           } 
                                           cout<<endl;                                                                              
cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 muz2:
     
     system("color 70");
       cout<<endl;
   cout<<"2)-Istiklâl Marsimiz kaclik olcuyle yazilmistir? ";                                                    
   cout<<endl;
            cout<<"A)2/4     ";
            cout<<"B)4/4     ";
            cout<<"C)9/8     ";
            cout<<"D)6/8     ";  
            cout<<endl;     
            ss24:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s3332;     }           
                                  cout<<endl;                                                                                                   
                      cout<<"B)4/4    ";
                      cout<<"C)9/8    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss24;
                         cout<<endl;                                                                           
                           }
            s3332:
            cout<<"Cevabiniz==>";
            cin>>s13;
            cout<<endl;
            Sleep(1000); 
            if(s13=='C'||s13=='c'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik2.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=10";
                                 cout<<endl;
                                 } 
                                 else if (s13=='A'||s13=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s13=='B'||s13=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s13=='D'||s13=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto muz2;
                                           
                                           } 
                                           cout<<endl; 
cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 muz3:
     
     system("color 70");
       cout<<endl;
   cout<<"3)-Bir eserde ezgi ve soz uyumuna ne denir? ";                                                    
   cout<<endl;
            cout<<"A)Dizek     ";
            cout<<"B)Koncerto     ";
            cout<<"C)Tartim     ";
            cout<<"D)Prozodi     ";  
            cout<<endl;     
            ss25:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
           if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s3334;     }           
                                  cout<<endl;                                                                                                   
                      cout<<"A)Dizek    ";
                      cout<<"D)Prozodi    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss25;
                         cout<<endl;                                                                           
                           }
            s3334:
            cout<<"Cevabiniz==>";
            cin>>s14;
            cout<<endl;
            Sleep(1000); 
            if(s14=='D'||s14=='d'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik3.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=15";
                                 cout<<endl;
                                 } 
                                 else if (s14=='A'||s14=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s14=='B'||s14=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s14=='C'||s14=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto muz3;
                                           
                                           } 
                                           cout<<endl;   
 cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 muz4:
     
     system("color 70");
       cout<<endl;
   cout<<"4)-Sozlerinin butunu veya cogu sarkili olarak soylenen muzikli tiyatro eserine ne denir?  ";                                                    
   cout<<endl;
            cout<<"A)Opera     ";
            cout<<"B)Aria     ";
            cout<<"C)Serenat     ";
            cout<<"D)Sonat     ";  
            cout<<endl;     
             s50:   
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s3335;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"A)Opera    ";
                      cout<<"C)Serenat    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto s50;
                         cout<<endl;                                                                           
                           }
            s3335:
            cout<<"Cevabiniz==>";
            cin>>s15;
            cout<<endl;
            Sleep(1000); 
            if(s15=='A'||s15=='a'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik4.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=20";
                                 cout<<endl;
                                 } 
                                 else if (s15=='B'||s15=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s15=='C'||s15=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s15=='D'||s15=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto muz4;
                                           
                                           } 
                                           cout<<endl;
cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 muz5:
     
     system("color 70");
       cout<<endl;
   cout<<"5)-Hangisi Yunus Emre Oratoryosu ve ilk Turk operasi Ozsoy'u bestelemis olan ilk devlet sanatcimizdir?  ";                                                    
   cout<<endl;
            cout<<"A)Muammer Sun      ";
            cout<<"B)Ahmet Adnan Saygun      ";
            cout<<"C)Faik Canselen      ";
            cout<<"D)Ulvi Cemal Erkin     ";  
            cout<<endl;     
            s51:   
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s3336;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"A)Muammer Sun    ";
                      cout<<"B)Ahmet Adnan Saygun    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto s51;
                         cout<<endl;                                                                           
                           }
            s3336:
            cout<<"Cevabiniz==>";
            cin>>s16;
            cout<<endl;
            Sleep(1000); 
            if(s16=='B'||s16=='b'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik5.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=25";
                                 cout<<endl;
                                 } 
                                 else if (s16=='A'||s16=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s16=='C'||s16=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s16=='D'||s16=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto muz5;
                                           
                                           } 
                                           cout<<endl;                                           
cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 muz6:
     
     system("color 70");
       cout<<endl;
   cout<<"6)-Istiklâl Marsini besteleyen kimdir?  ";                                                    
   cout<<endl;
            cout<<"A)Cemal Resit Rey      ";
            cout<<"B)Mehmet Akif Ersoy      ";
            cout<<"C)Hasan Ferit Alnar      ";
            cout<<"D)Osman Zeki Ungor       ";  
            cout<<endl;     
            s52:   
           if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s3337;     }           
                                  cout<<endl;                                                                                                   
                      cout<<"A)Cemal Resit Rey    ";
                      cout<<"D)Osman Zeki Ungor    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto s52;
                         cout<<endl;                                                                           
                           }
            s3337:
            cout<<"Cevabiniz==>";
            cin>>s17;
            cout<<endl;
            Sleep(1000); 
            if(s17=='D'||s17=='d'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik6.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=30";
                                 cout<<endl;
                                 } 
                                 else if (s17=='A'||s17=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s17=='B'||s17=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s17=='C'||s17=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto muz6;
                                           
                                           } 
                                           cout<<endl;                                           
 cout<<"TEBRIKLER MUZIK SORULARINI BASARIYLA CEVAPLADINIZ.";
                                           secccc:
                                               cout<<endl;
                                           cout<<"BASKABIR KATAGORIDE YARISMAK ISTERMISINIZ?(E/H)";
                                           cin>>cos;
                                           
                                           if (cos=='E'||cos=='e'){
                                                                   goto basa;
                                                                   }
                                                                   else if (cos=='H'||cos=='h'){
                                                                        goto enson;
                                                                        }
                                                                        else {
                                                                             cout<<"Hatali Giris Yaptiniz.";
                                                                             goto secccc;
                                                                             }
                                                        
                                                        cout<<endl;
                                         fen:
                                             Sleep(1500);
                                             cout<<endl;
                                         
                         cout<<"                  FEN SORULARI ...";                                                        
cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 fen1:
     
     system("color 70");
       cout<<endl;
   cout<<"1)-Asagidakilerden hangisi DNA'nýn ozelligi degildir? ";                                                    
   cout<<endl;
            cout<<"A)Cift sarmalli olma      ";
            cout<<"B)Sitoplazmada bulunma      ";
            cout<<"C)Adenin Bazý bulundurma      ";
            cout<<"D)Deoksiriboz bulundurma      ";  
            cout<<endl;     
            ss26:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s556;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"B)Sitoplazmada bulunma    ";
                      cout<<"C)Adenin Bazý bulundurma    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss26;
                         cout<<endl;                                                                           
                           }
            s556:
            cout<<"Cevabiniz==>";
            cin>>s18;
            cout<<endl;
            Sleep(1000); 
            if(s18=='B'||s18=='b'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=30";
                                 cout<<endl;
                                 } 
                                 else if (s18=='A'||s18=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s18=='C'||s18=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s18=='D'||s18=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto fen1;
                                           
                                           } 
                                           cout<<endl;                                                         
cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 fen2:
     
     system("color 70");
       cout<<endl;
   cout<<"2)-Darwin' in evrimle ilgili iki temel dusuncesi asagidakilerden hangisinde dogru verilmistir. ";                                                    
   cout<<endl;
            cout<<"A)Adaptasyon - Kalitim      ";
            cout<<"B)Modifikasyon - Adaptasyon      ";
            cout<<"C)Varyasyon - Dogal secilim      ";
            cout<<"D)Mutasyon - Modifikasyon      ";  
            cout<<endl;     
            ss27:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s557;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"A)Adaptasyon - Kalitim    ";
                      cout<<"C)Varyasyon - Dogal secilim    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss27;
                         cout<<endl;                                                                           
                           }
            s557:
            cout<<"Cevabiniz==>";
            cin>>s19;
            cout<<endl;
            Sleep(1000); 
            if(s19=='C'||s19=='c'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik2.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=30";
                                 cout<<endl;
                                 } 
                                 else if (s19=='A'||s19=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s19=='B'||s19=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s19=='D'||s19=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto fen2;
                                           
                                           } 
                                           cout<<endl;                                                         
                                           cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 fen3:
     
     system("color 70");
       cout<<endl;
   cout<<"3)-Kalitimda gorevli olan molekulleri kucukten buyuge dogru sirasi nasildir? ";                                                    
   cout<<endl;
            cout<<"A)Kromozom-Gen-DNA      ";
            cout<<"B)DNA-Gen-Kromozom      ";
            cout<<"C)DNA-Kromozom-Gen      ";
            cout<<"D)Gen-DNA-Kromozom      ";  
            cout<<endl;     
            ss28:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s558;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"D)Gen-DNA-Kromozom    ";
                      cout<<"C)DNA-Kromozom-Gen    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss28;
                         cout<<endl;                                                                           
                           }
            s558:
            cout<<"Cevabiniz==>";
            cin>>s21;
            cout<<endl;
            Sleep(1000); 
            if(s21=='D'||s21=='d'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik3.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=30";
                                 cout<<endl;
                                 } 
                                 else if (s21=='A'||s21=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s21=='B'||s21=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s21=='C'||s21=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto fen3;
                                           
                                           } 
                                           cout<<endl;
                                           cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 fen4:
     
     system("color 70");
       cout<<endl;
   cout<<"4)-Bir kaptaki sivi basinci verilenlerden hangisine bagli degildir? ";                                                    
   cout<<endl;
            cout<<"A)Kabin sekli-Sivi miktari      ";
            cout<<"B)Sivinin yogunlugu-Sivi miktari      ";
            cout<<"C)Sivinin derinligi-Kabin sekli      ";
            cout<<"D)Sivi miktari-Sivi derinligi      ";  
            cout<<endl;    
            
            s53:   
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s559;     }           
                                  cout<<endl;                                                                                                   
                      cout<<"A)Kabin sekli-Sivi miktari    ";
                      cout<<"D)Sivi miktari-Sivi derinligi    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto s53;
                         cout<<endl;                                                                           
                           } 
                           s559:
            cout<<"Cevabiniz==>";
            cin>>s32;
            cout<<endl;
            Sleep(1000); 
            if(s32=='A'||s32=='a'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik4.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=30";
                                 cout<<endl;
                                 } 
                                 else if (s32=='B'||s32=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s32=='C'||s32=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s32=='D'||s32=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto fen4;
                                           
                                           } 
                                           cout<<endl;                                           
                    cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 fen5:
     
     system("color 70");
       cout<<endl;
   cout<<"5)-Sivi icinde batan iki cisim eger ayni miktarda sivi tasiriyorsa asagidaki ozelliklerden hangileri ortaktir?";                                                    
   cout<<endl;
            cout<<"A)Agirliklari      ";
            cout<<"B)Ozkutleleri      ";
            cout<<"C)Kaldirma kuvveti      ";
            cout<<"D)Surtunme kuvveti      ";  
            cout<<endl;     
            
            s54:   
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s551;     }           
                                  cout<<endl;                                                                                                   
                      cout<<"C)Kaldirma kuvveti    ";
                      cout<<"D)Surtunme kuvveti    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto s54;
                         cout<<endl;                                                                           
                           }
                           s551:
            cout<<"Cevabiniz==>";
            cin>>s23;
            cout<<endl;
            Sleep(1000); 
            if(s23=='C'||s23=='c'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik5.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=30";
                                 cout<<endl;
                                 } 
                                 else if (s23=='A'||s23=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s23=='B'||s23=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s23=='D'||s23=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto fen5;
                                           
                                           } 
                                           cout<<endl;                       
                           cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 fen6:
     
     system("color 70");
       cout<<endl;
   cout<<"6)-Asagida verilenlerden hangisi insanlarda gorulen genetik hastaliklardan degildir. ";                                                    
   cout<<endl;
            cout<<"A)Renk Korlugü      ";
            cout<<"B)Kemik erimesi      ";
            cout<<"C)Hemofili      ";
            cout<<"D)Akdeniz Anemisi      ";  
            cout<<endl;     
            s55:   
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s553;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"B)Kemik erimesi    ";
                      cout<<"D)Akdeniz Anemisi    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto s55;
                         cout<<endl;                                                                           
                           }
            s553:
            cout<<"Cevabiniz==>";
            cin>>s24;
            cout<<endl;
            Sleep(1000); 
            if(s24=='B'||s24=='b'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik6.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=30";
                                 cout<<endl;
                                 } 
                                 else if (s24=='A'||s24=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s24=='C'||s24=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s24=='D'||s24=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto fen6;
                                           
                                           }                                            
                                           cout<<endl;
                                           cout<<"TEBRIKLER FEN SORULARINI BASARIYLA CEVAPLADINIZ.";
                                           seccccc:
                                               cout<<endl;
                                           cout<<"BASKABIR KATAGORIDE YARISMAK ISTERMISINIZ?(E/H)";
                                           cin>>cos;
                                           
                                           if (cos=='E'||cos=='e'){
                                                                   goto basa;
                                                                   }
                                                                   else if (cos=='H'||cos=='h'){
                                                                        goto enson;
                                                                        }
                                                                        else {
                                                                             cout<<"Hatali Giris Yaptiniz.";
                                                                             goto seccccc;
                                                                             }
                                                        
                                                        cout<<endl;
                                                        spor:
                                             Sleep(1500);
                                             cout<<endl;
                                         
                         cout<<"                  SPOR SORULARI ...";
          cout<<endl;
     cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 spor1:
     
     system("color 70");
       cout<<endl;
   cout<<"1)-FIFA Dunya Kupasinda en cok sampiyonluk yasayan ulke hangisidir?";                                                    
   cout<<endl;
            cout<<"A)Arjantin     ";
            cout<<"B)Portekiz     ";
            cout<<"C)Ispanya     ";
            cout<<"D)Brazilya     ";  
            cout<<endl;     
            ss29:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s998;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"A)Arjantin    ";
                      cout<<"D)Brezilya    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss29;
                         cout<<endl;                                                                           
                           }
            s998:
            cout<<"Cevabiniz==>";
            cin>>s25;
            cout<<endl;
            Sleep(1000); 
            if(s25=='D'||s25=='d'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=05";
                                 cout<<endl;
                                 } 
                                 else if (s25=='A'||s25=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s25=='B'||s25=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s25=='C'||s25=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=0";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto spor1;
                                           
                                           } 
                                           cout<<endl;     
    cout<<endl;
     cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 spor2:
     
     system("color 70");
       cout<<endl;
   cout<<"2)-Asagidaki spor branslarindan hangisi bir takim oyunudur?";                                                    
   cout<<endl;
            cout<<"A)Kaykay     ";
            cout<<"B)Halat Cekme     ";
            cout<<"C)Kendo     ";
            cout<<"D)Bungee Jumping     ";  
            cout<<endl;     
            ss30:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
           if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s997;     }           
                                  cout<<endl;                                                                                                   
                      cout<<"A)Kaykay    ";
                      cout<<"B)Halat Cekme    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss30;
                         cout<<endl;                                                                           
                           }
            s997:
            cout<<"Cevabiniz==>";
            cin>>s26;
            cout<<endl;
            Sleep(1000); 
            if(s26=='b'||s26=='B'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik2.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=10";
                                 cout<<endl;
                                 } 
                                 else if (s26=='A'||s26=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s26=='C'||s26=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s26=='D'||s26=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=05";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto spor2;
                                           
                                           } 
                                           cout<<endl; 
       cout<<endl;
     cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 spor3:
     
     system("color 70");
       cout<<endl;
   cout<<"3)-Maraton yarislarinda atletlere kac kilometrede bir icecek seyler verilir?";                                                    
   cout<<endl;
            cout<<"A)2     ";
            cout<<"B)6     ";
            cout<<"C)5     ";
            cout<<"D)8     ";  
            cout<<endl;     
            ss31:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s996;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"A)2    ";
                      cout<<"C)5    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss31;
                         cout<<endl;                                                                           
                           }
            s996:
            cout<<"Cevabiniz==>";
            cin>>s27;
            cout<<endl;
            Sleep(1000); 
            if(s27=='C'||s27=='c'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik3.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=15";
                                 cout<<endl;
                                 } 
                                 else if (s27=='A'||s27=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s27=='B'||s27=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s27=='D'||s27=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=10";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto spor3;
                                           
                                           } 
                                           cout<<endl;                                    
        cout<<endl;
     cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 spor4:
     
     system("color 70");
       cout<<endl;
   cout<<"4)-Turkiye A Milli Futbol Takimi'nda en fazla gol atan oyuncu kimdir?";                                                    
   cout<<endl;
            cout<<"A)Metin Oktay     ";
            cout<<"B)Hakan Sukur     ";
            cout<<"C)Tuncay Sanli     ";
            cout<<"D)Riza Calimbay     ";  
            cout<<endl;     
            ss3111:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s995;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"A)Metin Oktay    ";
                      cout<<"B)Hakan Sukur    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss3111;
                         cout<<endl;                                                                           
                           }
            s995:
            
            cout<<"Cevabiniz==>";
            cin>>s28;
            cout<<endl;
            Sleep(1000); 
            if(s28=='B'||s28=='b'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik4.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=20";
                                 cout<<endl;
                                 } 
                                 else if (s28=='A'||s28=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s28=='C'||s28=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s28=='D'||s28=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=15";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto spor4;
                                           
                                           } 
                                           cout<<endl;                                        
         cout<<endl;
     cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 spor5:
     
     system("color 70");
       cout<<endl;
   cout<<"5)-Masa Tenisi Birincisi Kimdir?";                                                    
   cout<<endl;
            cout<<"A)Timo boll     ";
            cout<<"B)ZHANG Jike     ";
            cout<<"C)Vladimir Samsonov     ";
            cout<<"D)Ma Long     ";  
            cout<<endl;     
            ss3991:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s994;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"A)Timo boll    ";
                      cout<<"D)Ma Long    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss3991;
                         cout<<endl;                                                                           
                           }
            s994:
            
            cout<<"Cevabiniz==>";
            cin>>s29;
            cout<<endl;
            Sleep(1000); 
            if(s29=='D'||s29=='d'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik5.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=25";
                                 cout<<endl;
                                 } 
                                 else if (s29=='A'||s29=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s29=='B'||s29=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s29=='C'||s29=='c'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=20";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto spor5;
                                           
                                           } 
                                           cout<<endl; 
                 cout<<endl;
     cout<<endl;                                                                                                                                                                                                                                                                                              
cout<<endl; 
Sleep(1250);     
 spor6:
     
     system("color 70");
       cout<<endl;
   cout<<"6)-KayseriSpor kac yilinda kurulmustur?";                                                    
   cout<<endl;
            cout<<"A)1965     ";
            cout<<"B)1967     ";
            cout<<"C)1966     ";
            cout<<"D)1964     ";  
            cout<<endl;     
            ss091:  
                   cout<<endl;        
            cout<<"Yari Yariya Joker hakkini kullanmak istermisiniz?(E/H)";
            cin>>jo;
            
            
            if (jo=='E'||jo=='e') {
                cout<<--nu<<"  Adet %50 Joker Hakkiniz Kaldi.";
                 if (nu== -1){
                               
                                 cout<<"Yari Yariya Joker hakkiniz kalmadi.";
                                 goto s993;     }           
                                  cout<<endl;                                                                                                    
                      cout<<"B)1967    ";
                      cout<<"C)1966    "; 
                                                                                       
                      }
                           
                                                                                                         
                      else if (jo=='H'||jo=='h') {
                           
                    cout<<endl;      
                                            
                    }             
               
                    
                    else {
                         cout<<endl;
                         cout<<"Hatali Giris Yaptiniz.";
                         goto ss091;
                         cout<<endl;                                                                           
                           }
            s993:
            
            cout<<"Cevabiniz==>";
            cin>>s31;
            cout<<endl;
            Sleep(1000); 
            if (s31=='C'||s31=='c'){
                                 cout<<"Cevabiniz...";
                                 Sleep(1000);
                                 system("color 8A");
                                 PlaySound("dogrusik6.wav",NULL,SND_FILENAME);
                                 cout<<endl;
                                 cout<<"Tebrikler Dogru.";
                                 cout<<endl;
                                 cout<<"Puaniniz=30";
                                 cout<<endl;
                                 } 
                                 else if (s31=='A'||s31=='a'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      
                                      } 
                                      else if (s31=='B'||s31=='b'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }     
                                      else if (s31=='D'||s31=='d'){
                                      cout<<"Cevabiniz...";
                                      Sleep(750);
                                      system("color 84");
                                      PlaySound("yanlissik.wav",NULL,SND_FILENAME);
                                      cout<<"Uzgunuz yanlis cevap yarismamiz bitti.";
                                      cout<<endl;
                                      cout<<"Puaniniz=25";
                                      Sleep(500);
                                      goto enson;
                                      
                                      }   
                                      else {
                                           cout<<"Hatali Giris Yaptiniz.";
                                           goto spor6;
                                           
                                           } 
                                           cout<<endl;    
                                           cout<<"TEBRIKLER SPOR SORULARINI BASARIYLA CEVAPLADINIZ.";
                                          donn:
                                               cout<<endl;
                                           cout<<"BASKABIR KATAGORIDE YARISMAK ISTERMISINIZ?(E/H)";
                                           cin>>cos;
                                           
                                           if (cos=='E'||cos=='e'){
                                                                   goto basa;
                                                                   }
                                                                   else if (cos=='H'||cos=='h'){
                                                                        goto enson;
                                                                        }
                                                                        else {
                                                                             cout<<"Hatali Giris Yaptiniz.";
                                                                             goto donn;
                                                                             }    
                                           
                                                                                                                                                                                      
                         enson:
                         
                         system("pause");
                         return 0;
                         }
                         
                         
                         
                         
                         
                         
