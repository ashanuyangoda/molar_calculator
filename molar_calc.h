#include<iostream>
using namespace std;


<<<<<<< HEAD
=======


>>>>>>> f61aee7 (few changes)
enum element_symbols{H,                                                                 He, 
                     Li, Be,                                        B,  C,  N,  O,  F,  Ne, 
                     Na, Mg,                                        Al, Si, P,  S,  Cl, Ar, 
                     K,  Ca, Sc, Ti, V, Cr, Mn, Fe, Co, Ni, Cu, Zn, Ga, Ge, As, Se, Br, Kr,
                     Rb, Sr, Y,  Zr, Nb,Mo, Tc, Ru, Rh, Pd, Ag, Cd, In, Sn, Sb, Te, I,  Xe,
                     Cs, Ba, La, Hf, Ta, W, Re, Os, Ir, Pt, Au, Hg, Tl, Pb, Bi, Po, At, Rn,
                     Fr, Ra, Ac, Rf, Db,Sg, Bh, Hs};

class elements
{
    public:
    
    string name[100] = {"Hydrogen", "Helium", 
                        "Lithium", "Beryllium", "Boron", "Carbon", "Nitrogen", "Oxygen", "Fluorine", "Neon",
                         "Sodium", "Magnesium", "Aluminium", "Silicon", "Phosphorus", "Sulfur", "Chlorine", "Argon", 
                         "Potassium", "Calcium", 
                         "Scandium", "Titanium", "Vanadium", "Chromium", "Manganese", "Iron", "Cobalt", "Nickel", "Copper", "Zinc",
                         "Gallium", "Germanium", "Arsenic", "Selenium", "Bromine", "Krypton",
                         "Rubidium", "Strontium", 
                         "Yttrium", "Zirconium", "Niobium", "Molybdenum", "Technetium", "Ruthenium", "Rhodium", "Palladium", "Silver", "Cadmium",
                         "Indium", "Tin", "Antimony", "Tellurium", "Iodine", "Xenon", 
                         "Caesium", "Barium", "Lanthanum", 
                         "Hafnium", "Tantalum", "Tungsten", "Rhenium", "Osmium", "Iridium", "Platinum", "Gold", "Mercury", 
                         "Thallium", "Lead", "Bismuth", "Polonium", "Astatine", "Radon",
                         "Francium", "Radium", "Actinium",
                         "Rutherfordium", "Dubnium", "Seaborgium", "Bohrium", "Hassium"};
    
    int Z[100] = {1, 2, 
                  3, 4, 5, 6, 7, 8, 9, 10, 
                  11, 12, 13, 14, 15, 16, 17, 18, 
                  19, 20, 
                  21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 
                  37, 38, 
                  39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 
                  55, 56, 57, 
                  72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 
                  87, 88, 89,
                  104, 105, 106, 107, 108};

    float u[100] = {1.0078, 4.0026, 
                    6.9410, 9.0122, 10.811, 12.011, 14.0067, 15.999, 18.998, 20.180, 
                    22.989769, 24.305, 26.982, 28.086, 30.974, 32.065, 35.453, 39.948, 
                    39.098, 40.078, 
                    44.956, 47.867, 50.942, 51.996, 54.938, 55.845, 58.933, 58.693, 63.546, 65.380, 
                    69.723, 72.640, 74.922, 78.960, 79.904, 83.798,
                    85.468, 87.620, 
                    88.906, 91.224, 92.906, 95.950, 98, 101.07, 102.91, 106.42, 107.87, 112.41,
                    114.82, 118.71, 121.76, 127.60, 126.90, 131.29, 
                    132.91, 137.33,
                    138.91, 178.49, 180.95, 183.84, 186.21, 190.23, 192.22, 195.08, 196.97, 200.59,
                    204.38, 207.20, 208.98, 209, 210, 222,
                    223, 226,
                    227, 267, 262, 269, 264, 269};

};

float solute_mass(float molar_mass, float required_molarity, float solution_volume)
{
    float for_one_L = molar_mass*required_molarity;
    float mass_gram = for_one_L*solution_volume;
    return mass_gram;
}
    /* 
    Example 1:
        A bottle of dilute hydrochloric acid is 2M.
        What mass of HCL would be disolved in 100cm3 of this acid?
        
        36.5g/mol
        2M (2 mol/dm3 or 2mol/l)
        100cm3 = 100ml = 0.1 litre or 0.1 dm3

        solute_mass(36.5, 2, 0.1);

    /////////////finding required solute mass to prepare a solution/////////////
        solute_mass(molar_mass, required_molarity, solution_volume);
        Where;  
                molar_mass in g/mol
                required_molarity in M or mol/dm3 or mol/l
                solution_volume in litre or dm3
                returns solute_mass in grams (g)

    */

float molarity(float molar_mass, float solute_mass, float solution_volume)
{
    float mol_in_one_L = solute_mass / molar_mass;
    float molarity_of_solution = mol_in_one_L / solution_volume;
    return molarity_of_solution;
}
    /* 
    Example 2:
        A solution of silver nitrate (AgNO3), 
        contains 1.08g in 250cm3. What is its molarity?

        108g/mol
        1.08g
        250cm3 = 250ml = 0.25 litre or 0.25 dm3

        molarity(108, 1.08, 0.25);

    /////////////finding molarity or concentration of a solution/////////////
        molarity(molar_mass, solute_mass, solution_volume)
        Where;
                molar_mass in g/mol
                solute_mass in grams (g)
                solution_volume in litre or dm3   
                returns molarity in M or mol/dm3 or mol/l     

    */