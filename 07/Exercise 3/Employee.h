class Employee{
	protected:
		char *m_name;
		char *m_no;
	public:
		Employee(char *, char *);
		virtual ~Employee();
		virtual void display();
};

class Leader:public Employee{
	private:
		char *m_posdes;
	public:
		Leader(char *, char *, char *);
		~Leader();
		void display();
};
