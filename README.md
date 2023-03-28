# molar_calculator
Calculating chemical compunds in a solution.

## Example 1:
   A bottle of dilute hydrochloric acid is 2M.
   What mass of HCL would be disolved in 100cm3 of this acid?
        
   **36.5g/mol** 
   
   **2M (2 mol/dm3 or 2mol/l)** 
   
   **100cm3 = 100ml = 0.1 litre or 0.1 dm3**

        solute_mass(36.5, 2, 0.1);

To find required solute mass to prepare a solution use the following method:
   ### solute_mass(molar_mass, required_molarity, solution_volume);
   
   Where;  
   
   * molar_mass in g/mol
   * required_molarity in M or mol/dm3 or mol/l
   * solution_volume in litre or dm3
   * returns solute_mass in grams (g)

## Example 2:
   A solution of silver nitrate (AgNO3), 
   contains 1.08g in 250cm3. What is its molarity?

   **108g/mol**
   
   **1.08g**  
   
   **250cm3 = 250ml = 0.25 litre or 0.25 dm3**

        molarity(108, 1.08, 0.25);

To find molarity or concentration of a solution use the following method:
   ### molarity(molar_mass, solute_mass, solution_volume)
   
   Where;
        
   * molar_mass in g/mol
   * solute_mass in grams (g)           
   * solution_volume in litre or dm3             
   * returns molarity in M or mol/dm3 or mol/l


# Molar mass related calculations.
You can access the database of Periodic Table of Elements in this library. 
To access all elements first you need add the following line to the code.
   
    elements el;
    
Then you can access the atomic mass as 'u', atomic number as 'Z' and name of the element as 'name'.

 ## Molar mass of Na2SO4 (Sodium Sulphate) compound
    float compound2 = el.u[Na]*2 + el.u[S] + el.u[O]*4;
    cout<<compound2<<" g/mol"<<endl;

 ## Molar mass of (NH4)2 SO4 (Amonium Sulphate) compound
    float compound4 = (el.u[N] + el.u[H]*4)*2 + el.u[S] + el.u[O]*4;
    cout<<compound4<<" g/mol"<<endl;

 ## For Sodium Chloride
    float mass = el.u[Na] + el.u[Cl];
    cout<<"Molar mass of Sodium Cloride: "<<mass<<endl;
    cout<<"Atomic mass of Na: "<<el.Z[Na]<<endl;
    cout<<"Atomic mass of Cl: "<<el.Z[Cl]<<endl;
    cout<<"Name of Na: "<<el.name[Na]<<endl;
    cout<<"Name of Cl: "<<el.name[Cl]<<endl;
