#ifndef AUTHOR_H
#define AUTHOR_H
#include <iostream>
using namespace std;

class Author
{
	int authorid;
	string authorName;
	string 	bookName;
	int noOfBookPublished;
	int totalSale=30;
	public:
		
Author();

Author(int authid,string aname,string bname,int bookp,int sale);

	int  getAuthorid();

	
	string  getAuthorName();
	string  getBookName();


	int  getnoOfBookPublished();
	int  getTotalSale();

	
	 void  getAuthorid(int id);

	 void  getAuthorName(string aname);

	 void  getBookName(string bname);

	void  getnoOfBookPublished(int bookp);

	void  getTotalSale(int totals);

	void display();

};






#endif
