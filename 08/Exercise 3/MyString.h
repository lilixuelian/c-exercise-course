class MyString{
	private:
		char *m_str;
	public:
		MyString();
		MyString(char*);
		char at(int) const;
		int length() const;
		void clear();
		bool empty() const;
		int compare(const MyString&) const;
		int compare(int, int, MyString) const;
		void copy(char*, int, int);
		char* data() const;
		int find(char) const;
		int find(char, int) const;
}; 
