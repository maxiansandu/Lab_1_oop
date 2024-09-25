
# Implementați un exemplu simplu care folosește încapsularea, 
# unde variabilele de instanță sunt private, iar accesul la ele este realizat prin metode publice

class Person:
    def __init__(self,nume,prenume):

        self.__nume=nume
        self.__prenume=prenume

#setter
    def ad_new_name(self,nume):

        self.__nume=nume
        
    def ad_new_pren(self,pren):

        self.__prenume=pren



#getter
    def get_nume(self):

        return self.__nume
    
    def get_prenume(self):

        return self.__prenume





person=Person("ion","vanea")


print(f"numele este {person.get_nume()}")
print(f"prenume este {person.get_prenume()}")




person.ad_new_name(input())
person.ad_new_pren(input())


print(f"numele este {person.get_nume()}")
print(f"prenume este {person.get_prenume()}")





