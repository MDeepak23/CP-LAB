create table branch(bname varchar(5) primary key,yoe number(4),intake number(3));
insert into branch values('cse',2008,240);
insert into branch values('ece',2008,180);
insert into branch values('eee',2008,60);
select *from branch;
create table person1
(
  rollno number(2) primary key,name varchar(10) not null,bname varchar(5),per number(5,2),email varchar(20) unique,foreign key(bname) references branch
);
alter table person1 add sec varchar(1);
insert into person1 values(23,'deepak','cse',98.2,'ramu@gmail.com',null);
insert into person1 values(3,'anu','ece',99.7,'anu@gmail.com',null);
update person1 set sec='A' where rollno=23;
update person1 set sec='B' where rollno=3;
alter table person1 drop column sec;

select *from person1;
