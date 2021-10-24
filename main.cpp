#include <iostream>
#include <conio.h>

#include <clista.h>

using namespace std;

int main()
{
    cLista g;

    // Insertando noodos hardcodeados
    g.insertarNodo("Mazamitla", "Jalisco", 2005, "Semiseco y semi calido", 1, "Mundo Aventura Parque Ecologico");
    g.insertarNodo("Sayulita", "Nayarit", 2015, "Tropical", 25, "Campamento tortuguero Sayulita");
    g.insertarNodo("Isla Mujeres", "Quintana Roo", 2015, "Calido", 27, "Cabo Catoche");
    g.insertarNodo("Tepoztlan", "Morelos", 2010, "Nublado", 18, "Sitio arqueologico Tepozteco");
    g.insertarNodo("San Pedro Tlaquepaque", "Jalisco", 2018, "Semicalido", 20, "El Parian");

    g.insertarNodo("Tapalpa", "Jalisco", 2002, "Fresco", 16, "Las Pilas");
    g.insertarNodo("Casas Grandes", "Chihuahua", 2015, "Desertico", 17, "Zona Arqueologica Paquime");
    g.insertarNodo("Valle de Bravo", "Estado de Mexico", 2005, "Templado", 18, "Monte Alto");
    g.insertarNodo("Valladolid", "Yucatan", 2012, "Semi humedo", 25, "Cenote Yokzonot");
    g.insertarNodo("Bernal", "Queretaro", 2005, "Semiseco y seco", 18, "Cadereyta de Montes");

    g.insertarNodo("Real de Catorce", "San Luis Potosi", 2001, "Arido, templado", 18, "Tunel de Ogarrio");
    g.insertarNodo("Cholula", "Puebla", 2012, "Calido y templado", 17, "Piramide de Cholula");
    g.insertarNodo("Creel", "Chihuahua", 2007, "Seco", 24, "Barrancas del Cobre");
    g.insertarNodo("Mapimi", "Durango", 2012, "Fresco y seco", 26, "Sierra del Sarnoso");
    g.insertarNodo("Zacatlan", "Puebla", 2011, "Templado, subhumedo", 14, "Barranca de los Jilgueros");

    g.insertarNodo("Huasca de Ocampo", "Hidalgo", 2001, "Templado, semi frio", 15, "Bosque de las Truchas");
    g.insertarNodo("Mazunte", "Oaxaca", 2015, "Tropical", 27, "Iguanario de Barra del Potrero");
    g.insertarNodo("Patzcuaro", "Michoacan", 2002, "Calido y templado", 15, "Casa de los Once Patios");
    g.insertarNodo("Chiapa de Corzo", "Chiapas", 2012, "Calido, Subhumedo", 24, "Canion del Sumidero");
    g.insertarNodo("Tequila", "Jalisco", 2003, "Semiarido, Subtropical", 23, "Tren Jose Cuervo Express");

    g.insertarNodo("Palenque", "Chiapas", 2015, "Tropical, calido y humedo", 27, "Bonampak");


    g.insertarAdyacencia("Casas Grandes", 616, 7, 5, "Creel");
    g.insertarAdyacencia("Casas Grandes", 893, 7, 6, "Mapimi");
    g.insertarAdyacencia("Creel", 674, 4, 7, "Mapimi");
    g.insertarAdyacencia("Mapimi", 834, 5, 7, "Tequila");
    g.insertarAdyacencia("Tequila", 71, 4, 9, "San Pedro Tlaquepaque");
    g.insertarAdyacencia("San Pedro Tlaquepaque", 581, 4, 7, "Real de Catorce");
    g.insertarAdyacencia("Real de Catorce", 692, 4, 7, "Huasca de Ocampo");
    g.insertarAdyacencia("Huasca de Ocampo", 90, 4, 2, "Zacatlan");
    g.insertarAdyacencia("Zacatlan", 132, 6, 3, "Cholula");
    g.insertarAdyacencia("Cholula", 618, 8, 4, "Mazunte");
    g.insertarAdyacencia("Mazunte", 544, 3, 7, "Chiapa de Corzo");
    g.insertarAdyacencia("Chiapa de Corzo", 263, 9, 8, "Palenque");
    g.insertarAdyacencia("Palenque", 689, 8, 8, "Valladolid");
    g.insertarAdyacencia("Valladolid", 177, 9, 6, "Isla Mujeres");
    g.insertarAdyacencia("Huasca de Ocampo", 231, 3, 6, "Bernal");
    g.insertarAdyacencia("Bernal", 313, 7, 6, "Tepoztlan");
    g.insertarAdyacencia("Tepoztlan", 738, 7, 3, "Mazunte");
    g.insertarAdyacencia("Bernal", 297, 7, 4, "Patzcuaro");
    g.insertarAdyacencia("Patzcuaro", 293, 4, 8, "Valle de Bravo");
    g.insertarAdyacencia("Valle de Bravo", 514, 6, 8, "Mazamitla");
    g.insertarAdyacencia("Mazamitla", 136, 9, 8, "Tapalpa");
    g.insertarAdyacencia("Mazamitla", 396, 7, 5, "Sayulita");
    g.insertarAdyacencia("Sayulita", 320, 4, 8, "Tapalpa");

    g.imprimir();
}
