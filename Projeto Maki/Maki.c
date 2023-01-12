#include <stdio.h>

int main ()

{

	int menu, sair=-1, entrada=-1, sub1=-1, temaki=-1, suno, carpB, carpBT, carpS, carpST, cev, poke, mix, cone; //entradas
	int tshimeji,tcebo, tatum, thot, tika, tsemi, tcali, tmexi, tskin, tfila, tkani, tveg; 				//temakis e vegetariano
	int sub2=-1, ura=-1, ucali, ufila, usal, upep, umex, ushi, ucrispy, uavo, upre, ukani, ubat, uatum, usalm, utuna, uika, uskin, sobre=-1, hnut, hban, uromeu;	//Uramaki
	int sub3=-1, hosso=-1, hpep, hkani, hemp, hatum, hsal, hfila;											//Uramakis
	int hot=-1, hotf, hotb, hotca, hotc;																// Hots
	int vegan=-1, kapa, cali, roll, aspar;																//Vegano
	int sashi=-1, ssal, satum, sbran, sashise=-1, salse, atumse, sub4=-1, saltru=-1, salt, atumt, brant;		//Sashimis
	int nig=-1, nigsal, niga, nigb, nigsk, nigka, nigtru=-1, nigsalt, nigat, nigp, nigbt, nigma=-1, nigmasal, nigmaa, nigmab, nigemp, nigsalcri, nigmacri; 	//Niguiris
	int sub5, coz=-1, quente=-1, misso, gohan, lula, shimeji, guisal, yakicar, yakifran, isca, bok;		//entradas quentes
	int yaki=-1, yakicarn, yakifrango, yakicam, yakifru, mesh=-1, meshcar, meshfran, meshcam; 				//yakisoba e yakimesh
	int teppan=-1, teptila, tepcho, tepfru, cveg=-1, vegmesh, vegyaki, veggui, vegharu, vegano=-1, vegsoba, vegmesh2, vegtempu;  	//teppan, vegetariano e vegano
	int harumaki=-1, queijo, camarao, pq=-1, xadrez, risoto, frango, peixe, sobremesa=-1, banana, romeu, sorvete, doce;				//pratos quentes e sobremesas
	int i1=0, i2=0, i3=0, i4=0, i5=0, i6=0, i7=0, i8=0, i9=0, i10=0;
	int i11=0, i12=0, i13=0, i14=0, i15=0, i16=0, i17=0, i18=0, i19=0, i20=0;
	int i21=0, i22=0, i23=0, i24=0, i25=0, i26=0, i27=0, i28=0, i29=0, i30=0;
	int i31=0, i32=0, i33=0, i34=0, i35=0, i36=0, i37=0, i38=0, i39=0, i40=0;
	int i41=0, i42=0, i43=0, i44=0, i45=0, i46=0, i47=0, i48=0, i49=0, i50=0;
	int i51=0, i52=0, i53=0, i54=0, i55=0, i56=0, i57=0, i58=0, i59=0, i60=0;
	int i61=0, i62=0, i63=0, i64=0, i65=0, i66=0, i67=0, i68=0, i69=0, i70=0;
	int i71=0, i72=0, i73=0, i74=0, i75=0, i76=0, i77=0, i78=0, i79=0, i80=0;
	int i81=0, i82=0, i83=0, i84=0, i85=0, i86=0, i87=0, i88=0, i89=0, i90=0;
	int i91=0, i92=0, i93=0, i94=0, i95=0, i96=0, i97=0, i98=0, i99=0, i100=0;
	int i101=0, i102=0, i103=0, i104=0, i105=0, i106=0, i107=0, i108=0, i109=0, i110=0;
	int i111=0, i112=0, i113=0;
	
	printf ("Bem vindo ao programa do Jonas \n");
	
	while (sair!=0)
	{
		printf ("\n\nDigite qual a ficha que voces estao contando agora:\n\n");
		printf ("Digite 1 para a ficha de Entradas\n");
		printf ("Digite 2 para a ficha de Uramakis\n");
		printf ("Digite 3 para a ficha de Hossomakis\n");
		printf ("Digite 4 para a ficha de Sashimi Trufado\n");
		printf ("Digite 5 para a ficha de Entradas Quentes\n\n");
		printf ("Digite 0 para sair\n\n");
		scanf ("%d", &sair);
		
		switch (sair)
		{
			case 1:
				
				while (sub1 !=0)
				{
				
					printf ("\nDigite 1 para Entradas\n");
					printf ("Digite 2 para Temakis\n");
					printf ("Digite 3 para Vegetariano\n");
					printf ("Digite 0 para Sair\n");
					scanf ("%d", &sub1);
					
					switch (sub1)
					{
						case 1:
							
							while (entrada !=0)
							{
							
								printf ("\nDigite qual entrada vai ser contada:\n\n"); 
								printf ("1- Sunomono\n");								//i1
								printf ("2- Carpaccio de Peixe Branco\n");				//i2
								printf ("3- Carpaccio de Peixe Braco Trufado\n");		//i3
								printf ("4- Carpaccio de Salmao\n");					//i4
								printf ("5- Carpaccio de Salmao Trufado\n");				//i5
								printf ("6- Ceviche Misto\n");							//i6
								printf ("7- Poke Misto\n");								//i7
								printf ("8- Mix de Peixes\n");							//i8
								printf ("9- Cone recheado com pate\n\n");				//i9
								printf ("Digite 0 para sair\n");						
								scanf ("%d", &entrada);
							
								switch (entrada)
								{
									case 1:
										printf ("Quantos sunomonos: \n");
										scanf ("%d", &suno);
										i1=suno+i1;
									break;
								
									case 2:
										printf ("Quantos Carp. de Peixe Branco: \n");
										scanf ("%d", &carpB);
										i2=carpB+i2;
									break;
								
									case 3:
										printf ("Quantos Carp. de Peixe Branco Trufado: \n");
										scanf ("%d", &carpBT);
										i3=carpBT+i3;
									break;
								
									case 4:
										printf ("Quantos Carp. de Salmao: \n");
										scanf ("%d", &carpS);
										i4=carpS+i4;
									break;
								
									case 5:
										printf ("Quantos Carp. Salmao Trufado: \n");
										scanf ("%d", &carpST);
										i5=carpST+i5;
									break;
								
									case 6:
										printf ("Quantos Ceviche: \n");
										scanf ("%d", &cev);
										i6=cev+i6;
									break;
								
									case 7:
										printf ("Quantos pokes: \n");
										scanf ("%d", &poke);
										i7=poke+i7;
									break;
								
									case 8:
										printf ("Quantos Mix de Peixes: \n");
										scanf ("%d", &mix);
										i8=mix+i8;
									break;
								
									case 9:
										printf ("Quantos Cone Reacheado: \n");
										scanf ("%d", &cone);
										i9=cone+i9;
									break;
								
								}
							}
						break;
					
						case 2:
							
							while (temaki !=0)
							{
							
								printf ("\nDigite qual Temaki vai ser contado:\n\n");
								printf ("1- Salmao Shimeji\n");							//i10
								printf ("2- Salmao Cebolinha\n");						//i11
								printf ("3- Atum Cebolinha\n");							//i12
								printf ("4- Hot\n");									//i13
								printf ("5- Ika\n");									//i14
								printf ("6- Semi Hot\n");								//i15
								printf ("7- California\n");								//i16
								printf ("8- Mexicano\n");								//i17
								printf ("9- Skin Tempura\n");							//i18
								printf ("10- Filadelphia\n");							//i19
								printf ("11- Kani Empanado\n\n");						//i20
								printf ("Digite 0 para sair\n");
								scanf ("%d", &temaki);
								
								switch (temaki)
								{
									case 1:
										printf ("Quantos Salmao Shimeji: \n");
										scanf ("%d", &tshimeji);
										i10=tshimeji+i10;
									break;
									
									case 2:
										printf ("Quantos Salmao Cebolinha: \n");
										scanf ("%d", &tcebo);
										i11=tcebo+i11;
									break;
									
									case 3:
										printf ("Quantos Atum Cebolinha: \n");
										scanf ("%d", &tatum);
										i12=tatum+i12;
									break;
									
									case 4:
										printf ("Quantos Temaki Hot: \n");
										scanf ("%d", &thot);
										i13=thot+i13;
									break;
									
									case 5:
										printf ("Quantos Temaki Ika: \n");
										scanf ("%d", &tika);
										i14=tika+i14;
									break;
									
									case 6:
										printf ("Quantos Temaki Semi Hot: \n");
										scanf ("%d", &tsemi);
										i15=tsemi+i15;
									break;
									
									case 7:
										printf ("Quantos Temaki California: \n");
										scanf ("%d", &tcali);
										i16=tcali+i16;
									break;
									
									case 8:
										printf ("Quantos Temaki Mexicano: \n");
										scanf ("%d", &tmexi);
										i17=tmexi+i17;
									break;	
									
									case 9:
										printf ("Quantos Temaki Skin Tempura: \n");
										scanf ("%d", &tskin);
										i18=tskin+i18;
									break;
									
									case 10:
										printf ("Quantos Temaki Filadelphia: \n");
										scanf ("%d", &tfila);
										i19=tfila+i19;
									break;
									
									case 11:
										printf ("Quantos Temaki Kani - Premium: \n");
										scanf ("%d", &tkani);
										i20=tkani+i20;
									break;
								}
							}
						break;
						
						case 3:
							printf ("\nHot Filadelfia Legumes\n");			//i21
							scanf ("%d", &tveg);
							i21=tveg+i21;				
						break;
						
						default:
							printf ("");
						break;
					}
				}
			break;
			
			case 2:	
			
				while (sub2 !=0)
				{
					printf ("\nDigite 1 para Uramakis\n");
					printf ("Digite 2 para Sobremesas\n");
					printf ("Digite 0 para Sair\n");
					scanf ("%d", &sub2);
					
					switch (sub2)
					{
						case 1:
							
							while (ura !=0)
							{
							
								printf ("\nDigite o Uramaki que vai ser contado: \n\n");
								printf ("1- California\n");			//i22
								printf ("2- Philadelfia\n");		//i23
								printf("3- Salmao\n");				//i24
								printf("4- Pepino\n");				//i25
								printf("5- Mexicano\n");			//i26
								printf("6- Shimeji\n");				//i27
								printf("7- Crispy Alho Poro\n");	//i28
								printf("8- Avocado Roll\n");		//i29
								printf("9- Premium\n");				//i30
								printf("10- Kani com Molho Maki\n");		//i31
								printf("11- Atum com Crispy de Batata\n");	//i32
								printf("12- Atum Crocante\n");		//i33	
								printf("13- Salmao Crocante\n");	//i34
								printf("14- Spice Tuna\n");			//i35
								printf("15- Ika\n");				//i36
								printf("16- Skin Simples\n");		//i37
								printf("\nDigite 0 para Sair\n");
								scanf ("%d", &ura);					
								
								switch (ura)
								{
									case 1:
										printf ("Quantos Uramaki California: \n");
										scanf ("%d", &ucali);
										i22=ucali+i22;
									break;
									
									case 2:
										printf ("Quantos Uramaki Filadelphia: \n");
										scanf ("%d", &ufila);
										i23=ufila+i23;
									break;
									
									case 3:
										printf ("Quantos Uramaki Salmao:\n");
										scanf ("%d", &usal);
										i24=usal+i24;
									break;
									
									case 4:
										printf ("Utilize a opcao 3 'Uramaki de Salmao' para contar os de pepino\n");
										//scanf ("%d", &upep);
										//i25=upep+i25;
									break;
									
									case 5:
										printf ("Quantos Uramaki Mexicano:\n");
										scanf ("%d", &umex);
										i26=umex+i26;
									break;
									
									case 6:
										printf ("Quantos Uramaki Shimeji:\n");
										scanf ("%d", &ushi);
										i27=ushi+i27;
									break;
									
									case 7:
										printf ("Quantos Uramaki Crispy de Alho Poro: \n");
										scanf ("%d", &ucrispy);
										i28=ucrispy+i28;
									break;
									
									case 8:
										printf ("Quantos Uramaki Avocado Roll:\n");
										scanf ("%d", &uavo);
										i29=uavo+i29;
									break; 
									
									case 9:
										printf ("Quantos Uramaki Premium:\n");
										scanf ("%d", &upre);
										i30=upre+i30;
									break;
									
									case 10:
										printf ("Quantos Uramaki Kani:\n");
										scanf ("%d", &ukani);
										i31=ukani+i31;
									break;
									
									case 11:
										printf ("Quantos Uramaki Atum Batata Baroa:\n");
										scanf ("%d", &ubat);
										i32=ubat+i32;
									break;
									
									case 12:
										printf ("Quantos Uramaki Atum Crocantes: \n");
										scanf ("%d", &uatum);
										i33=uatum+i33;
									break;
									
									case 13:
										printf ("Quantos Uramaki Salmao Crocante:\n");
										scanf ("%d", &usalm);
										i34=usalm+i34;
									break;
									
									case 14:
										printf ("Quantos Uramaki Spice Tuna:\n");
										scanf ("%d", &utuna);
										i35=utuna+i35;
									break;
									
									case 15:
										printf ("Quantos Uramaki Ika:\n");
										scanf ("%d", &uika);
										i36=uika+i36;
									break;
									
									case 16:
										printf ("Quantos Uramaki Skin Simples:\n");
										scanf ("%d", &uskin);
										i37=uskin+i37;
									break;
								}
							}	
						break;
						
						case 2:
							
							while (sobre!=0)
							{
								printf ("\nQual Sobremesa esta sendo contada:\n\n");
								printf ("1- Hot Nutella\n");		//i38
								printf ("2- Hot Banana\n");			//i39
								printf ("3- Uramaki Romeu e Julieta\n");		//i40
								printf ("\nDigite 0 pra Sair");
								scanf ("%d", &sobre);	
								
								switch (sobre)
								{
									case 1:
										printf ("Quantos Hot Nutella: \n");
										scanf ("%d", &hnut);
										i38=hnut+i38;
									break;
									
									case 2:
										printf ("Quantos Hot Banana: \n");
										scanf ("%d", &hban);
										i39=hban+i39;
									break;
									
									case 3:
										printf ("Quantos Uramaki Romeu e Julieta: \n");
										scanf ("%d", &uromeu);
										i40=uromeu+i40;
									break;
									
									default:
										printf("");
									break;
										
								}
							}
						break;			
					}
				}
			break;
			
			case 3:
				
				while (sub3!=0)
				{
					printf ("\nDigite 1 para Hossomaki\n");
					printf ("Digite 2 para Hot\n");
					printf ("Digite 3 para Vegano\n");
					printf ("Digite 4 para Sashimi Simples\n");
					printf ("Digite 5 para Sashimi Selado\n");
					printf ("\nDigite 0 para Sair\n");
					scanf ("%d", &sub3);
					
					switch (sub3)
					{
						case 1:
							
							while (hosso !=0)
							{
								printf ("\nDigite qual Hossomaki vai ser contado agora:\n\n");
								printf ("1- Pepino\n");							//i41
								printf ("2- Kani Kama\n");						//i42
								printf ("3- Kani Empanado\n");					//i43
								printf ("4- Atum\n");							//i44
								printf ("5- Salmao\n");							//i45
								printf ("6- Salmao e Cream Cheese\n");			//i46
								printf ("Digite 0 para sair\n");	
								scanf ("%d", &hosso);
								
								switch (hosso)
								{
									case 1:
										printf ("Quantos Hossomaki de Pepino:\n");
										scanf ("%d", &hpep);
										i41=hpep+i41;
									break;
									
									case 2:
										printf ("Quantos Hossomaki de Kani Kama:\n");
										scanf ("%d", &hkani);
										i42=hkani+i42;
									break;
									
									case 3: 
										printf ("Quantos Hossomaki de Kani Empanado:\n");
										scanf ("%d", &hemp);
										i43=hemp+i43;
									break;
									
									case 4:
										printf ("Quantos Hossomaki de Atum: \n");
										scanf ("%d", &hatum);
										i44=hatum+i44;
									break;
									
									case 5:
										printf ("Quantos Hossomaki de Salmao:\n");
										scanf ("%d", &hsal);
										i45=hsal+i45;
									break;
									
									case 6:
										printf ("Quantos Hossomaki de Salmao Cream Cheese: \n");
										scanf ("%d", &hfila);
										i46=hfila+i46;
									break;	
								}
							}
						break;
						
						case 2:
							
							while (hot !=0)
							{
							
								printf ("\nQual Hot vai ser contado agora:\n\n");
								printf ("1- Filadelphia\n");		//i47
								printf ("2- Bowl\n");				//i48
								printf ("3- Camarao\n");			//i49
								printf ("4- Croc\n");				//i50
								printf ("\nDigite 0 para sair\n");
								scanf ("%d", &hot);
								
								switch (hot)
								{
									case 1:
										printf ("Quantos Hot Filadelphia: \n");
										scanf ("%d", &hotf);
										i47=hotf+i47;
									break;
									
									case 2:
										printf ("Quantos Hot Bowl:\n");
										scanf ("%d", &hotb);
										i48=hotb+i48;
									break;
									
									case 3:
										printf ("Quantos Hot Camarao:\n");
										scanf ("%d", &hotca);
										i49=hotca+i49;
									break;
									
									case 4:
										printf ("Quantos Hot Croc: \n");
										scanf ("%d", &hotc);
										i50=hotc+i50;
									break;
								}
							}
						break;
						
						case 3:
							while (vegan !=0)
							{
							
								printf ("\nQual Vegano vai ser contado:\n\n");
								printf ("1- Kapamaki\n");				//i51
								printf ("2- Califórnia\n");				//i52
								printf ("3- Uramaki Roll Legumes\n");	//i53
								printf ("4- Hossomaki de Aspargo\n");	//i54
								printf ("\nDigite 0 para Sair\n");	
								scanf ("%d", &vegan);
								
								switch (vegan)
								{
									case 1:
										printf ("Quantos Kapamaki\n");
										scanf ("%d", &kapa);
										i51=kapa+i51;
									break;
									
									case 2:
										printf ("Nao existe codigo para esse item:\n");
										//scanf ("%d", &cali);
										//i52=cali+i52;
									break;
									
									case 3:
										printf ("Quantos Ura Roll Legumes:\n");
										scanf ("%d", &roll);
										i53=roll+i53;
									break;
									
									case 4:
										printf ("Quantos Hosso de Aspargo");
										scanf ("%d", &aspar);
										i54=aspar+i54;
									break;
								}
							}
						break;
						
						case 4:
							while (sashi !=0)
							{
								printf ("\nQual Sashimi Simples vai ser contado:\n\n");
								printf ("1- Salmao\n"); 		//i55
								printf ("2- Atum\n");			//i56
								printf ("3- Peixe Branco\n");	//i57
								printf ("\nDigite 0 para Sair\n");
								scanf ("%d", &sashi);
								
								switch (sashi)
								{
									case 1:
										printf ("Quantos Sashimi de Salmao: \n");
										scanf ("%d",&ssal);
										i55=ssal+i55;
									break;
									
									case 2:
										printf ("Quantos Sashimi de Atum: \n");
										scanf ("%d", &satum);
										i56=satum+i56;
									break;
									
									case 3:
										printf ("Quantos Sashimi de P. Branco: \n");
										scanf ("%d", &sbran);
										i57=sbran+i57;
									break;
								}
							}
						break;
						
						case 5:
							while (sashise !=0)
							{
								printf ("\nQual Sashimi Selado vai ser contado: \n\n");
								printf ("1- Salmao Selado\n");			//i58
								printf ("2- Atum Selado\n");			//i59
								printf ("\nDigite 0 para Sair\n");
								scanf ("%d", &sashise);
								
								switch(sashise)
								{
									case 1:
										printf ("Quantos Sashimi Salmao Selado: \n");
										scanf ("%d", &salse);
										i58=salse+i58;
									break;
									
									case 2:
										printf ("Quantos Sashimi Atum Selado: \n");
										scanf ("%d", &atumse);
										i59=atumse+i59;
									break;
								}
							}
						break;
					}
				}
			break;
			
			case 4:
				
				while (sub4 !=0)
				{
					printf ("\nDigite 1 para Sashimi Trufado\n");
					printf ("Digite 2 para Niguiri Simples\n");
					printf ("Digite 3 para Niguiri Trufado\n");
					printf ("Digite 4 para Niguiri Macaricado\n");
					printf ("\nDigite 0 para Sair\n");
					scanf ("%d", &sub4);
					
					switch (sub4)
					{
						while (saltru !=0)
						{
						
							case 1:
								printf ("\nQual Sashimi Trufado vai ser contado agora: \n\n");
								printf ("1- Salmao Trufado\n");				//i60
								printf ("2- Atum Trufado\n");				//i61
								printf ("3- Peixe Branco\n");				//i62
								printf ("\nDigite 0 para sair\n");
								scanf ("%d", &saltru);
								
								switch (saltru)
								{
									case 1:
										printf ("Quantos Sashimi de Salmao Trufado: \n");
										scanf ("%d", &salt);
										i60=salt+i60;
									break;
									
									case 2:
										printf ("Quantos Atum Trufado: \n");
										scanf ("%d", &atumt);
										i61=atumt+i61;
									break;
									
									case 3:
										printf ("Quantos Peixe Branco Trufado");
										scanf ("%d", &brant);
										i62=brant+i62;
									break;
									
								}
							break;	
							
							case 2:
								
								while (nig !=0)
								{
								
									printf ("\nQual Niguiri Simples vai ser contado agora:\n\n");
									printf ("1- Salmao\n");						//i63
									printf ("2- Atum\n");						//i64
									printf ("3- Peixe Branco\n");				//i65
									printf ("4- Skin\n");						//i66
									printf ("5- Kani Kama\n");					//i67
									printf ("\nDigite 0 para Sair\n");
									scanf ("%d", &nig);
									
									switch (nig)
									{
										case 1:
											printf ("Quantos Niguiri de Salmao: \n");
											scanf ("%d", &nigsal);
											i63=nigsal+i63;
										break;
										
										case2:
											printf ("Quantos Niguiri de Atum: \n");
											scanf ("%d", &niga);
											i64=niga+i64;
										break;
										
										case 3:
											printf ("Quantos Niguiri Peixe Branco: \n");
											scanf ("%d", &nigb);
											i65=nigb+i65;
										break;
										
										case 4:
											printf ("Quantos Niguiri Skin: \n");
											scanf ("%d", &nigsk);
											i66=nigsk+i66;
										break;
												
										case 6:
											printf ("Quantos Niguiri Kani Kama: \n");
											scanf ("%d", &nigka);
											i67=nigka+i67;
										break;			
									}
								}
							break;	
							
							case 3:
								while (nigtru !=0)
								{
									printf ("\nQual Niguiri Trufado vai ser contado agora: \n\n");
									printf ("1- Salmao\n");			//i68
									printf ("2- Atum\n");			//i69
									printf ("3- Polvo\n");			//i70
									printf ("4- Peixe Branco\n");	//i71
									printf ("\nDigite 0 para Sair\n");	
									scanf ("%d", &nigtru);
									
									switch (nigtru)
									{
										case 1:
											printf ("Quantos Niguiri Trufado de Salmao: \n");
											scanf ("%d", &nigsalt);
											i68=nigsalt+i68;
										break;
										
										case 2:
											printf ("Quantos Niguiri Trufado de Atum: \n");
											scanf ("%d", &nigat);
											i69=nigat+i69;
										break;
										
										case 3:
											printf ("Quantos Niguiri Trufado de Polvo:\n");
											scanf ("%d", &nigp);
											i70=nigp+i70;
										break;
										
										case 4:
											printf ("Quantos Niguiri Trufado P. Branco: \n");
											scanf ("%d", &nigbt);
											i71=nigbt+i71;
										break;
									}
								}
							break;	
							
							case 4:
								while (nigma !=0)
								{
									printf ("\nQual Niguiri Macaricado vai ser contado: \n\n");
									printf ("1- Salmao\n");					//i72
									printf ("2- Atum\n");					//i73
									printf ("3- Peixe Branco\n");			//i74
									printf ("4- Kani Empanado\n");			//i75
									printf ("5- Salmao Crispy\n");			//i76
									printf ("6- Atum Crispy\n");			//i77
									printf ("\nDigite 0 pra Sair\n");
									scanf ("%d", &nigma);
									
									switch (nigma)
									{
										case 1:
											printf ("Quantos Niguiri Macaricado de Salmao: \n");
											scanf ("%d", &nigmasal);
											i72=nigmasal+i72;
										break;
										
										case 2:
											printf ("Quantos Niguiri Macararicado de Atum:\n");
											scanf ("%d", &nigmaa);
											i73=nigmaa+i73;
										break;
										
										case 3:
											printf ("Quantos Niguiri Macaricado de P. Branco:\n");
											scanf ("%d", &nigmab);
											i74=nigmab+i74;
										break;
										
										case 4:
											printf ("Quantos Niguiri Kani Empanado: \n");
											scanf ("%d", &nigemp);
											i75=nigemp+i75;
										break;
										
										case 5:
											printf ("Quantos Niguiri Salmao Crispy:\n");
											scanf ("%d", &nigmacri);
											i76=nigsalcri+i76;
										break;
										
										case 6:
											printf ("Quantos Niguiri Atum Crispy: \n");
											scanf ("%d", &nigmacri);
											i77=nigmacri+i77;
										break;
									}
								}
						}
					}
				}
			break;
			
			case 5:
				
				while (coz !=0)	
				{
					printf ("\nDigite 1 para Entradas Quentes\n");
					printf ("Digite 2 para Yakissoba\n");
					printf ("Digite 3 para Yakimeshi\n");
					printf ("Digite 4 para Teppan\n");
					printf ("Digite 5 para Vegetariano\n");
					printf ("Digite 6 para Vegano\n");
					printf ("Digite 7 para Harumaki\n");
					printf ("Digite 8 para Pratos Quentes\n");
					printf ("Digite 9 para Sobremesas\n");
					printf ("\nDigite 0 para Sair\n");
					scanf ("%d", &coz);
					
					switch (coz)
					{
						case 1: 
							while (quente !=0)
							{
								printf ("Digite qual a Entrada Quente vai ser contada\n\n");
								printf ("1- Missoshiro\n");				//i78
								printf ("2- Gohan\n");					//i79
								printf ("3- Lula Frita");				//i80
								printf ("4- Shimeji\n");				//i81
								printf ("5- Guioza de Salmao\n");		//i82
								printf ("6- Yakitori de Carne\n");		//i83
								printf ("7- Yakitori de Frango\n");		//i84
								printf ("8- Isca de Tilápia\n");		//i85
								printf ("9- Bok Choy\n");				//i86
								printf ("Digite 0 para Sair");
								scanf ("%d", &quente);
								
								switch (quente)
								{
									case 1: 
										printf ("Quantos Missoshiro: \n");
										scanf ("%d", &misso);
										i78=misso+i78;
									break;
									
									case 2:
										printf ("Quantos Gohan: \n");
										scanf ("%d", &gohan);
										i79=gohan+i79;
									break;
									
									case 3:
										printf ("Quantas Lulas Fritas: \n");
										scanf ("%d", &lula);
										i80=lula+i80;
									break;
									
									case 4:
										printf ("Quantos Shimeji: \n");
										scanf ("%d", &shimeji);
										i81=shimeji+i81;
									break;
									
									case 5:
										printf ("Quantas Guioza de Salmao: \n");
										scanf ("%d", &guisal);
										i82=guisal+i82;
									break; 
									
									case 6:
										printf ("Quantos Yakitori Carne: \n");
										scanf ("%d", &yakicar);
										i83=yakicar+i83;
									break;
									
									case 7:
										printf ("Quantos Yakitori Frango: \n");
										scanf ("%d", &yakifran);
										i84=yakifran+i84;
									break;
									
									case 8:
										printf ("Quantas Iscas de Tilapia: \n");
										scanf ("%d", &isca);
										i85=isca+i85;
									break;
									
									case 9:
										printf ("Quantos Bok Choy");
										scanf ("%d", &bok);
										i86=bok+i86;
									break;
								}
							}
						break;
						
						case 2:
							while (yaki !=0)
							{
								printf ("\nQual Yakissoba vai ser contado: \n\n");
								printf ("1- Carne\n");							//i87
								printf ("2- Frango\n");							//i88
								printf ("3- Camarao\n");						//i89
								printf ("4- Frutos do Mar\n");					//i90
								printf ("\nDigite 0 para Sair\n");
								scanf ("%d", &yaki);
								
								switch (yaki)
								{
									case 1:
										printf ("Quantos Yakissoba de Carne: \n");
										scanf ("%d", &yakicarn);
										i87=yakicarn+i87;
									break;
									
									case 2:
										printf ("Quantos Yakissoba de Frango: \n");
										scanf ("%d", &yakifrango);
										i88=yakifrango+i88;
									break;
									
									case 3:
										printf ("Quantos Yakissoba de Camarao: \n");
										scanf ("%d", &yakicam);
										i89=yakicam+i89;
									break;
									
									case 4:
										printf ("Quantos Yakissoba de Frutos do Mar: \n");
										scanf ("%d", &yakifru);
										i90=yakifru+i90;
									break;
								}
							}
						break;
						
						case 3:
							while (mesh !=0)
							{
								printf ("\nQual Yakimesh vai ser contado: \n\n");
								printf ("1- Carne\n");					//i91
								printf ("2- Frango\n");					//i92
								printf ("3- Camarao\n");				//i93
								printf ("\nDigite 0 para sair\n");
								scanf ("%d", &mesh);
								
								switch (mesh)
								{
									case 1: 
										printf ("Quantos Yakimesh de Carne: \n");
										scanf ("%d", &meshcar);
										i91=meshcar+i91;
									break;
									
									case 2:
										printf ("Quantos Yakimesh de Frango: \n");
										scanf ("%d", &meshfran);
										i92=meshfran+i92;
									break;
									
									case 3:
										printf ("Quantos Yakimesh de Camarao: \n");
										scanf ("%d", &meshcam);
										i93=meshcam+i93;
									break;
								}
							}
						break;
						
						case 4:
							while (teppan !=0)
							{
								printf ("\nQual Teppan vai ser contado agora: \n\n");
								printf ("1- Tilapia\n");				//i94
								printf ("2- Anchova\n");				//i95
								printf ("3- Frutos do Mar\n");			//i96
								printf ("\nDigite 0 para sair\n");		
								scanf ("%d", &teppan);
								
								switch (teppan)
								{
									case 1:
										printf ("Quantos Teppan de tilapia: \n");
										scanf ("%d", &teptila);
										i94=teptila+i94;
									break;
									
									case 2:
										printf ("Quantos Teppan de Anchova: \n");
										scanf ("%d", &tepcho);
										i95=tepcho+i95;
									break;
									
									case 3:
										printf ("Quantos Teppan de Frutos do Mar: \n");
										scanf ("%d", &tepfru);
										i96=tepfru+i96;
									break;
								}
							}
						break;
						
						case 5:
							while (cveg !=0)
							{
								printf ("\nQual vegetariano vai ser contado agora: \n\n");
								printf ("1- Yakimesh\n");				//i97
								printf ("2- Yakisoba\n");				//i98
								printf ("3- Guioza de Shimeji\n");		//i99
								printf ("4- Harumaki de Legumes\n");	//i100
								printf ("\nDigite 0 para sair\n");
								scanf ("%d", &cveg);
								
								switch (cveg)
								{
									case 1:
										printf ("Quantos Yakimesh: \n");
										scanf ("%d", &vegmesh);
										i97=vegmesh+i97;
									break;
									
									case 2:
										printf ("Quantos Yakisoba: \n");
										scanf ("%d", &vegyaki);
										i98=vegyaki+i98;
									break;
									
									case 3:
										printf ("Quantas Guiozas de Shimeji:\n");
										scanf ("%d", &veggui);
										i99=veggui+i99;
									break;
									
									case 4:
										printf ("Quantos Harumaki de Legumes: \n");
										scanf ("%d", &vegharu);
										i100=vegharu+i100;
									break;
								}
							}
						break;
						
						case 6:
							while (vegano !=0)
							{
								printf ("\nQual Vegano vai ser contado agora: \n\n");
								printf ("1- Yakisoba\n");				//i101
								printf ("2- Teppan de Legumes\n");		//i102
								printf ("3- Tempura de Legumes\n");		//i103
								printf ("\nDigite 0 para Sair\n");
								scanf ("%d", &vegano);
								
								switch (vegano)
								{
									case 1:
										printf ("Nao existe Codigo para esse item\n");
										//scanf ("%d", &vegsoba);
										//i101=vegsoba+i101;
									break;
									
									case 2:
										printf ("Quantos Yakimesh Vegano: \n");
										scanf ("%d", &vegmesh2);
										i102=vegmesh2+i102;
									break;
									
									case 3:
										printf ("Quantos Tempura de Legumes: \n");
										scanf ("%d", &vegtempu);
										i103=vegtempu+i103;
									break;
								}
								
							}
						break;
						
						case 7:
							while (harumaki !=0)
							{
								printf ("\nQual Harumaki vai ser contado: \n\n");
								printf ("1- Queijo\n");				//i104
								printf ("2- Camarao\n");			//i105
								printf ("\nDigite 0 para Sair\n");
								scanf ("%d", &harumaki);
								
								switch (harumaki)
								{
									case 1:
										printf ("Quantos Harumaki de Queijo: \n");
										scanf ("%d", &queijo);
										i104=queijo+i104;
									break;
									
									case 2:
										printf ("Quantos Harumaki de Camarao: \n");
										scanf ("%d", &camarao);
										i105=camarao+i105;
									break;
								}
							}
						break;
						
						case 8:
							while (pq !=0)
							{
								printf ("\nQual Prato Quente vai ser contado: \n\n");
								printf ("1- Frango Xadrez\n");						//i106
								printf ("2- Risoto Frutos do Mar\n");				//i107
								printf ("3- Frango Molho Oriental\n");				//i108
								printf ("4- Peixe Grelhado c/ Pure de Batata\n");	//i109
								printf ("\nDigite 0 para Sair\n");
								scanf ("%d", &pq);
								
								switch (pq)
								{
									case 1: 
										printf ("Quantos Frango Xadrez: \n");
										scanf ("%d", &xadrez);
										i106=xadrez+i106;
									break;
									
									case 2:
										printf ("Quantos Risoto Fruto do Mar: \n");
										scanf ("%d", &risoto);
										i107=risoto+i107;
									break;
									
									case 3:
										printf ("Quantos Frango Molho Oriental: \n");
										scanf ("%d", &frango);
										i108=frango+i108;
									break;
									
									case 4:
										printf ("Quantos Peixe Grelhado...: \n");
										scanf ("%d", &peixe);
										i109=peixe+i109;
									break;
								}
							}
						break;
						
						case 9:
							while (sobremesa !=0)
							{
								printf ("\nQual Sobremesa vai ser contado agora: \n\n");
								printf ("1- Harumaki de Banana\n");					//i110
								printf ("2- Harumaki Romeu e Julieta\n");			//i111
								printf ("3- Temaki na Casquinha\n");				//i112
								printf ("4- Cone Recheado Doce de Leite\n");		//i113
								printf ("\nDigite 0 para Sair\n");
								scanf ("%d", &sobremesa);
								
								switch (sobremesa)
								{
									case 1:
										printf ("Quantos Harumaki de Banana: \n");
										scanf ("%d", &banana);
										i110=banana+i110;
									break;
									
									case 2:
										printf ("Quantos Harumaki Romeu e Julieta: \n");
										scanf ("%d", &romeu);
										i111=romeu+i111;
									break;
									
									case 3:
										printf ("Quantos Temaki na Casquinha: \n");
										scanf ("%d", &sorvete);
										i112=sorvete+i112;
									break;
									
									case 4:
										printf ("Quantos Cone Recheado: \n");
										scanf ("%d", &doce);
										i113=doce+i113;
									break;
								}
							}
						break;
					}
				}
			break;					
		}
	}
	
	printf ("\n\t\tENTRADAS:\n\n");
	printf ("Sunomono: %d \t COD: 66\n", i1);
	printf ("\nCarp. Peixe Branco: %d \t COD: 2010\n", i2);
	printf ("\nCarp. Peixe Branco Trufado: %d \t COD: 1014\n", i3);
	printf ("\nCarp. Salmao: %d \t COD: 2014\n", i4);
	printf ("\nCarp. Salmao Trufado: %d \t COD: 2007\n", i5);
	printf ("\nCeviche Misto: %d \t COD: 1086\n", i6);
	printf ("\nPoke Misto: %d \t COD: 2009\n", i7);
	printf ("\nMix de Peixes: %d \t COD: 666\n", i8);
	printf ("\nCone Recheado com Pate: %d \t COD: 2027\n\n", i9);
	
	printf ("\n\nTEMAKIS:\n\n");
	printf ("Salmao Shimeji: %d \t COD: 1032\n", i10);
	printf ("\nSalmao Cebolinha: %d \t COD: 1030\n", i11);
	printf ("\nAtum Cebolinha: %d \t COD: 1031\n", i12);
	printf ("\nHot: %d \t COD: 1036\n", i13);
	printf ("\nIka: %d \t COD: 1037 \n", i14);
	printf ("\nSemi Hot: %d \t COD: 1039 \n", i15);
	printf ("\nCalifornia: %d \t COD: 1035 \n", i16);
	printf ("\nMexicano: %d \t COD: 1038 \n", i17);
	printf ("\nSkin Tempura: %d \t COD: 2024 \n", i18);
	printf ("\nPhiladelfia: %d \t COD: 1034 \n", i19);
	printf ("\nKani Empanado: %d \t COD: 2008 \n", i20);
	
	printf ("\n\nVEGETARIANO:\n\n");
	printf ("\nHot Philadelfia Legumes: %d \t COD:930 \n", i21);
	
	printf ("\n\nURAMAKIS:\n\n");
	printf ("\nCalifornia: %d \t COD: 1025 \n", i22);
	printf ("\nPhiladelfia: %d \t COD: 1020 \n", i23);
	printf ("\nSalmao: %d \t COD: 2025 \n", i24);
	printf ("\nMexicano: %d \t COD: 1028 \n", i26);
	printf ("\nShimeji: %d \t COD: 2005 \n", i27);
	printf ("\nCrispy Alho Poro: %d \t COD: 150626 \n", i28);
	printf ("\nAvocado Roll: %d \t COD: 2013 \n", i29);
	printf ("\nPremium: %d \t COD: 1018 \n", i30);
	printf ("\nKani Molho Maki: %d \t COD: 2012 \n", i31);
	printf ("\nAtum Crispy Batata Baroa: %d \t COD: 1023 \n", i32);
	printf ("\nAtum Crocante: %d \t COD: 2006\n", i33);
	printf ("\nSalmao Crocante: %d \t COD: 1024\n", i34);
	printf ("\nSpice Tuna: %d \t COD: 1026\n", i35);
	printf ("\nIka: %d \t COD: 1019\n", i36);
	printf ("\nSkin Simples: %d \t COD: 1021\n", i37);
	
	printf ("\n\nSOBREMESAS:\n\n");
	printf ("\nHot Nutella: %d \t COD: 150627\n", i38);
	printf ("\nHot Banana: %d \t COD: 150628\n", i39);
	printf ("\nUramaki Romeu Julieta: %d \t COD: 1022\n", i40);
	
	printf ("\n\nHOSSOMAKI:\n\n");
	printf ("\nSalmao: %d \t COD: 1052\n", i41);
	printf ("\nKani Kama: %d \t COD: 1053\n", i42);
	printf ("\nKani Empanado: %d \t COD: 1098\n", i43);
	printf ("\nAtum: %d \t COD: 1051\n", i44);
	printf ("\nSalmao: %d \t COD: 1050\n", i45);
	printf ("\nSalmao Cream Cheese: %d \t COD: 1055\n", i46);
	
	printf ("\n\nHOT:\n\n");
	printf ("\nPhiladelfia: %d \t COD: 1042\n", i47);
	printf ("\nBowl: %d \t COD: 1045\n", i48);
	printf ("\nCamarao: %d \t COD: 1044\n", i49);
	printf ("\nCroc: %d \t COD: 150623\n", i50);
	
	printf ("\n\nVEGANO:\n\n");
	printf ("\nKapamaki: %d \t COD: 955\n", i51);
	printf ("\nUramaki Roll Legumes: %d \t COD: 1027\n", i53);
	printf ("\nHosso Aspargo: %d \t COD: 956\n", i54);
	
	printf ("\n\nSASHIMI SIMPLES:\n\n");
	printf ("\nSalmao: %d \t COD: 1002\n", i55);
	printf ("\nAtum: %d \t COD: 2004\n", i56);
	printf ("\nPeixe Branco: %d \t COD: 1003\n", i57);
	
	printf ("\n\nSASHIMI SELADO:\n\n");
	printf ("\nSalmao: %d \t COD: 904\n", i58);
	printf ("\nAtum: %d \t COD: 906\n", i59);
	
	printf ("\n\nSASHIMI TRUFADO\n\n");
	printf ("\nSalmao: %d \t COD: 1004\n", i60);
	printf ("\nAtum: %d \t COD: 901\n", i61);
	printf ("\nPeixe Branco: %d \t COD: 902\n", i62);
	
	printf ("\n\nNIGUIRI SIMPLES:\n\n");
	printf ("\nSalmao: %d \t COD: 1006\n", i63);
	printf ("\nAtum: %d \t COD: 1007\n", i64);
	printf ("\nPeixe Branco: %d \t COD: 1012\n", i65);
	printf ("\nSkin: %d \t COD: 1008\n", i66);
	printf ("\nKani Kama: %d \t COD: 1009\n", i67);
	
	printf ("\n\nNIGUIRI TRUFADO:\n\n");
	printf ("\nSalmao: %d \t COD: 1000\n", i68);
	printf ("\nAtum: %d \t COD: 999\n", i69);
	printf ("\nPolvo: %d \t COD: 997\n", i70);
	printf ("\nPeixe Branco: %d \t COD: 998\n", i71);
	
	printf ("\n\nNIGUIRI MACARICADO\n\n");
	printf ("\nSalmao: %d \t COD: 996\n", i72);
	printf ("\nAtum: %d \t COD: 995\n", i73);
	printf ("\nPeixe Branco: %d \t COD: 994\n", i74);
	printf ("\nKani Empanado: %d \t COD: 993\n", i75);
	printf ("\nSalmao Crispy: %d \t COD: 992\n", i76);
	printf ("\nAtum Crispy: %d \t COD: 991\n", i77);
	
	printf ("\n\nENTRADAS QUENTES:\n\n");
	printf ("\nMissoshiro: %d \t COD: 1060\n", i78);
	printf ("\nGohan: %d \t COD: 907\n", i79);
	printf ("\nLula Frita: %d \t COD: 1068\n", i80);
	printf ("\nShimeji: %d \t COD: 1067\n", i81);
	printf ("\nGuioza Salmao: %d \t COD: 911\n", i82);
	printf ("\nYakitori Carne: %d \t COD: 908\n", i83);
	printf ("\nYakitori Frango: %d \t COD: 910\n", i84);
	printf ("\nIsca Tilapia: %d \t COD: 1070\n", i85);
	printf ("\nBok Choy: %d \t COD: 2019\n", i86);
	
	printf ("\n\nYAKISSOBA\n\n");
	printf ("\nCarne: %d \t COD: 1078\n", i87);
	printf ("\nFrango: %d \t COD: 960\n", i88);
	printf ("\nCamarao: %d \t COD: 1079\n", i89);
	printf ("\nFrutos do Mar: %d \t COD: 0954\n", i90);
	
	printf ("\n\nYAKIMESH\n\n");
	printf ("\nCarne: %d \t COD: 912\n", i91);
	printf ("\nFrango: %d \t COD: 913\n", i92);
	printf ("\nCamarao: %d \t COD: 914\n", i93);
	
	printf ("\n\nTEPPAN:\n\n");
	printf ("\nTilapia: %d \t COD: 1066\n", i94);
	printf ("\nAnchova: %d \t COD: 0807\n", i95);
	printf ("\nFrutos do Mar: %d \t COD: 2016\n", i96);
	
	printf ("\n\nCOZINHA-VEGETARIANO\n\n");
	printf ("\nYakimesh: %d \t COD: 953\n", i97);
	printf ("\nYakisoba: %d \t COD: 1080\n", i98);
	printf ("\nGuioza Shimeji: %d \t COD: 950\n", i99);
	printf ("\nHarumaki Legumes: %d \t COD: 1072\n", i100);
	
	printf ("\n\nCOZINHA-VEGANO\n\n");
	printf ("\nTeppan Legumes: %d \t COD: 1069\n", i102);
	printf ("\nTempura Legumes: %d \t COD: 1095\n", i103);
	
	printf ("\n\nHARUMAKI\n\n");
	printf ("\nQueijo: %d \t COD: 1075\n", i104);
	printf ("\nCamarao: %d \t COD: 1073\n", i105);
	
	printf ("\n\nPRATOS QUENTES\n\n");
	printf ("\nFrango Xadrez: %d \t COD: 2020\n", i106);
	printf ("\nRisoto Frutos do Mar: %d \t COD: 2022\n", i107);
	printf ("\nFrango Molho Oriental: %d \t COD: 2023\n", i108);
	printf ("\nPeixe Grelhado com Pure: %d \t COD: 2015\n", i109);
	
	printf ("\n\nSOBREMESAS\n\n");
	printf ("\nHarumaki Banana: %d \t COD: 1074\n", i110);
	printf ("\nHarumaki Romeu Julieta: %d \t COD: 1096\n", i111);
	printf ("\nTemaki na Casquinha de Sorvete: %d \t COD: 2017\n", i112);
	printf ("\nCone Doce de Leite: %d \t COD: 2018\n\n\n", i113);
	
	system ("pause");
	
	printf ("\nNAO APERTE NENHUMA TECLA SE NAO O PROGRAMA FECHA!!!");

return 0;	
	
}