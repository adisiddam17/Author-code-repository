#include "Author.h"

#include <iostream>
using namespace std;
Author::Author(){
	this->authorid=1;
	authorName="ABC";
	bookName="wings of fire"
	noOfBookPublished=340;
	totalSale=30;
}
Author::Author(int authid,string aname,string bname,int bookp,int sale){
	authorid=authid;
	authorName=aname;
	bookName=bname;
	noOfBookPublished=bookp;
	totalSale=sale;
}
	int Author:: getAuthorid(){
		return authorid;
	}
	string Author:: getAuthorName(){
		return authorName;
	}
	string Author:: getBookName(){
		return bookName;
	}
	int Author:: getnoOfBookPublished(){
		return noOfBookPublished;
	}
	int Author:: getTotalSale(){
		return totalSale;
	}
	
	 void Author:: getAuthorid(int id){
	 	authorid=id;
	 }
	 void Author:: getAuthorName(string aname){
	 	authorName=aname;
	 }
	 void Author:: getBookName(string bname){
	 	bookName=bname;
	 }
	void Author:: getnoOfBookPublished(int bookp){
		noOfBookPublished=bookp;	
	}
	void Author:: getTotalSale(int totals){
		totalSale=totals;
	}
//	void Author::display(){
//		this-
//	}
