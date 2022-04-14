#include<iostream>
#include<iostream>
#include<string>
#include<string>
#include<fstream>
#include<fstream>
#include"unindent.h"
#include"unindent.h"
usingnamespacestd;
usingnamespacestd;
intmain(){
intmain(){
		std::stringfile_to_change;
		std::stringfile_to_change;
		std::cout<<"Enterfiletochange:"<<std::endl;
		std::cout<<"Enterfiletochange:"<<std::endl;
		std::cin>>file_to_change;
		std::cin>>file_to_change;
		std::fstreammyfile;
		std::fstreammyfile;
		myfile.open(file_to_change,std::ios::in);
		myfile.open(file_to_change,std::ios::in);
		std::fstreamnewfile;
		std::fstreamnewfile;
		newfile.open("new-code.cpp",std::ios::out);
		newfile.open("new-code.cpp",std::ios::out);
		
		
		
		
		if(myfile.is_open()){
		if(myfile.is_open()){
			std::stringline;
			std::stringline;
			
			
			std::stringtemp="";
			std::stringtemp="";
			
			
			while(getline(myfile,line)){
			while(getline(myfile,line)){
				std::cout<<line<<std::endl;}
				std::cout<<line<<std::endl;}
			}
			}
		myfile.close();
		myfile.close();
		myfile.open(file_to_change,std::ios::in);
		myfile.open(file_to_change,std::ios::in);
		
		
		
		
		
		
		inttab=0;
		inttab=0;
		if(myfile.is_open()){
		if(myfile.is_open()){
			std::stringline;
			std::stringline;
			
			
			std::stringtemp="";
			std::stringtemp="";
			
			
			while(getline(myfile,line)){
			while(getline(myfile,line)){
				temp=removeLeadingSpaces(line);
				temp=removeLeadingSpaces(line);
				if(tab>0){
				if(tab>0){
					for(intx=0;x<=tab;x++){
					for(intx=0;x<=tab;x++){
						temp='\t'+temp;
						temp='\t'+temp;
						}
						}
					}
					}
				newfile<<temp<<endl;
				newfile<<temp<<endl;
				ints=countChar(line);
				ints=countChar(line);
				
				
				tab+=s;
				tab+=s;
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				newfile<<temp<<endl;
				newfile<<temp<<endl;
				
				
				
				
				std::cout<<temp<<endl;
				std::cout<<temp<<endl;
				}
				}
			newfile.close();
			newfile.close();
			myfile.close();
			myfile.close();
			}
			}
		
		
		return0;
		return0;
		}
		}
