       typedef unsigned z;typedef                                                   unsigned char y;                                                             typedef struct                                       {z a,b,c,d;y e,f[32];z g              
       ,h;}x;typedef char W;typedef                                                 void*Z;typedef                                                               struct{W a[216                                       ];}T;T*fopen(W*,W*);typedef            
(*Y)();volatile a[5][4]={{},{},{},{},{                                       4022250974u}},b[3]={0,0,4022250973u                                              },c,d,e[16],f,g,h                                   ,i,j,k,l,m,n,o,p,B,K,L=1,Q;x q,           
r;Y F[4];Z D;T*S;G(){return h<4;}H(){return                                  h>=0;}I(){return g<4;}J(){return                                                 g>=0;}W*A=                                          "\xe2\x96\x88\0 \x80\x84";W s[18           
][20]={"","\x1b[38;2;239;227;222m","\x1b[38;"                            "2;224;197;152m","\x1b[38;2;239;178;1"                                              "23m","\x1b[38;2"                                ";247;150;99m","\x1b[38;2;247;125;99m"       
,"\x1b[38;2;247;93;58m","\x1b[38;2;239;206;1"                            "15m","\x1b[38;2;239;202;99m","\x1b[3"                                              "8;2;239;198;82m"                                ,"\x1b[38;2;239;198;66m","\x1b[38;2;2"       
"39;19"                         "4;49m","\x1b"                         "[38;2;107;202;16m"          ,"\x1b[38;2;9"                                          "9;190"    ";8m",                                "\x1b[38;2;90"                  ";186;0m",        
                                   "\x1b[38;2;82"                     ";170;0m",                         "\x1b[38;"                                   "2;74;138"    ";16m",                               "\x1b[38;"                         "2;90;138"    
                                   ";247m"},t[2][                     3][31],u[18                         ][15]={" "                                   "     ",      "   2  ",                             "   4  ",                          "   8  ",     
                                       "  16  ",                      "  32  ",                          "  64  ",                                    "  128 "      ,"  256 ",                            "  512 ",                          " 1024 ",     
                                       " 2048 ",                      " 4096 ",                          " 8192 ",                                    " 16384"      ," 32768",                            " 65536",                          "131072"};    
                                       void P(W*U                  ){if(fork())                           return;S=fopen                            (U,"rb");if       (!S)return                            ;fseek(S,0                         ,2);Q=ftell    
                                       (S)/4;fseek                  (S,0,0);z _[Q]                         ;fread(_,4,Q,S                            );fclose(S       );for(f=0;                            f<Q;++f){if                         (_[f]==a[4    
                                       ][0]){for(                  g=0;g<4;++                                g)for(h=0;                         h<4;++h){_           [f-16+h+g*                            4]=a[g][h]                         ;}}if(_[f]    
                                   ==b[2]){_[f-2]                  =*b;_[f-1]                                =b[1];}}S=                         fopen(               "data.bin"                                ,"wb");if(                  !S)return;       
                                   fwrite(_,4,Q,S                  );fclose(S                                );if(rename                         ("data"              ".bin",U)==                                0){W*P[]={                  "chmod","+x"      
                                   ,U,0};execvp                    ("chmod",P                                );}}void w                     (){tcsetattr             (0,2,&q);                                    printf("\x1b[J\x1b[H\x1b[m");}            
                                   main(z V,W                     **U){O:for                                (g=0;g<4;++                     g)for(h=0;              h<4;++h)if                                   (a[g][h])L=0;F[0]=G;F[1]=H;F[2]           
                                =I;F[3]=J;                         for(B=0;B<                                30;++B){t[                  0][0][B]=A                  [4];t[0][1                                       ][B]=A[4];t[0][2][B]=A[4              
                                ];t[1][0][                         B]=A[(B%3==                                0)?0:(B%3==                  1)?1:2];t[                  1][1][B]=A                                       [(B%3==0)?0:(B%3==1)?1:5              
                            ];t[1][2][B]=A                         [(B%3==0)?                                0:(B%3==1)                  ?1:6];}                     t[1][1][2]                                =A[2];t[1][1][29]=A[2];t[1][2][2]=A[2]       
                            ;t[1][2][29]=A                         [2];for(B=                                0;B<3;++B)                  {t[0][B                     ][10]=A[3]                                ;t[1][B][30]=A[3];}srand(time(0));           
                         tcgetattr(0,&q                            );atexit(w                                );r=q;r.a&=              ~2046;r.b&=                     ~1;r.c|=60                            ;r.d&=~100011;                  r.f[6]=0;r.f[5    
                     ]=1;tcsetattr(                                0,2,&r);for                                (;;){f=0;            for(h=0;h<                         4;++h){for                         (g=0;g<4;++g){                         if(!a[g][h]){e
                     [f++]=g+4*h;}}                                }if(!f)goto                                v;i=rand()           %f;g=e[i]%                         4;h=e[i]/4                         ;if(L)a[g][h]=                         (rand()%10==0)
                  ?4:2;v:if(*b>b                                   [1])b[1]=*                                b;printf(        "\x1b[H\x1b[K\x1b[mScore:%d\tHighscore:%d\r\n",*b,b[1]);for              (h=0;h<4;++                                h){for(j=0
                  ;j<5;++j){for(                                   g=0;g<4;++                                g){k=0;if(       a[g][h]>0){k=31-__builtin_clz(a[g][h]);}printf("%s",s[k]);if              (j==0||j==                                4)printf(
              "%s",t[k!=0][0                                       ]);if(j==1)                            printf("%s",t[       k!=0][1]);if(j==2)if(k)printf("%s %s %s",A,u[k],A);else printf            ("  %s  ",                                u[k]);if(j
              ==3)printf("%s"                                      ,t[k!=0][2]);}                         printf("\r\n")       ;}}for(;;){c=0;d=0;while((d=read(0,&c,1))<0);p=(d==0)?'\0':              c;L=0;switch                               (p){case'r'
           :for(g=0;g<4;                                               ++g)for(h=                         0;h<4;++h)           a[g][h]=0;*b=0;L=1;goto O;case'q':P(*U);return 0;case'w':case             'a':case's'                                :case'd':D
       =&&E;C:switch(                                                 p){case'w'                         :case's':{                                                 for(g=0;g<                         4;++g){for(h=(                         p=='w')?0:3;F[
       p=='s']();h+=p                                                 =='w'?1:-1                         ){if(a[g][                                                 h]){l=h;if                         (p=='w')for(m=                         h-1;m>=0;--m){
    if(!a[g][m])l=                                                     m;}else for(m=h+1           ;m<4;++m){if(!a[g                                                 ][m])l=m;}                            if(l!=h){a[g][                  l]=a[g][h];a[g    
    ][h]=0;L=1;}}}                                                     }}break;case'a':            case'd':{for(h=0;                                                 h<4;++h){                             for(g=(p=='a')                  ?0:3;F[2+(p==     
'd')]();g+=p=='a'?1:-1){if(a[g][h]){n=g;if(p=='a'                         )for(o=g-1;o>=0;--o){if(!a[o][h])n=o;}                                                     else for(o                            =g+1;o<4;++o){if(!a[o][h])n=o;}if(n!=g){a[n][    
h]=a[g][h];a[g][h]=0;L=1;}}}}}break;}goto*D;E:                            switch(p){case'w':case's':{K=p=='w'?1:                                                     -1;for(g=0                            ;g<4;++g){for(h=p=='w'?1:2;F[p=='s']();h+=K){    
if(a[g][h]){if(a[g][h-K]==a[g][h]){a[g][h-K]*=2;*                            b+=a[g][h-K];a[g][h]=0;L=1;}}}}                                                        }break;case                                'a':case'd':{K=p=='a'?1:-1;for(h=0;h<4       
;++h){for(g=p=='a'?1:2;F[2+(p=='d')]();g+=K){if(a                                   [g][h]){if(a[g-K]                                                               [h]==a[g][                                       h]){a[g-K][h]*=2;*b+=a[g              
-K][h];a[g][h]=0;L=1;}}}}}break;}D=&&_;goto C;                                      default:;}}_:;}}                                                                                                                      // ChaosPotato42                 
