#include <bits/stdc++.h>

class link_list
{
	public:
		int data;
		link_list *next;
		link_list *root;
		// Methods for the link-lists
		void display(link_list *root);
		void traverse(link_list *root);
		void insert(link_list *root,int node);
		int delete_node(link_list *root,int node);


};
	
