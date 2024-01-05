### Clase ###

class MyEmptyPerson:
    pass


print(MyEmptyPerson)
print(MyEmptyPerson())


class Person:
    def __init__(self, name, surname, alias= "Sin alias"):
        self.full_name = f"{name} {surname} ***********{alias}********"
        self._name = name
        self._surname = surname

my_person = Person("Brennis", "Castro")
print(my_person.full_name)
my_person.walk()


my_other_person = Person("Brennis", "Castro", "BenjaDev")
print(my_other_person)
my_other_person.walk()
my_other_person.full_name= "Hector de Leon  El loco de  los perros"
print(my_other_person.full_name)

my_other_person.full_name = 666
print(my_other_person.full_name)