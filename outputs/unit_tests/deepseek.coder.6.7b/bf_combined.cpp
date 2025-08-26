#include<vector>
#include<string>
using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> result;
    // Vector of all 8 planets in order of their proximity to the sun.
    vector<string> planets {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};
    
    // Finding positions of planet1 and planet2 in the list. If either is not found, return an empty vector.
    auto it1 = find(planets.begin(), planets.end(), planet1);
    if (it1 == planets.end()) 
        return result;
    
    auto it2 = find(planets.begin(), planets.end(), planet2);
    if (it2 == planets.end())
        return result;
        
    // Check which one is further away from the sun
    if (distance(planets.begin(), it1) > distance(planets.begin(), it2)) 
        swap(it1, it2); 
    
    advance(it1, 1); // Skip planet1 to get all planets in between
    while (distance(it1, it2) != 0) {
        result.push_back(*it1);
        advance(it1, 1);
    }
  
    return result;
}

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
bool issame(vector<string> a,vector<string>b){
    if (a.size()!=b.size()) return false;
    for (int i=0;i<a.size();i++)
    {
    if (a[i]!=b[i]) return false;
    }
    return true;
}
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((issame(bf("Jupiter", "Neptune") , {"Saturn", "Uranus"}))){ tests_passed++; } total_tests++;

    if((issame(bf("Earth", "Mercury") , {"Venus",}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercury", "Uranus") , {"Venus", "Earth", "Mars", "Jupiter", "Saturn"}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptune", "Venus") , {"Earth", "Mars", "Jupiter", "Saturn", "Uranus"}))){ tests_passed++; } total_tests++;

    if((issame(bf("Earth", "Earth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mars", "Earth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "Makemake") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "Neptune") , {"Saturn","Uranus"}))){ tests_passed++; } total_tests++;

    if((issame(bf("Earth", "Mercury") , {"Venus"}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercury", "Uranus") , {"Venus","Earth","Mars","Jupiter","Saturn"}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptune", "Venus") , {"Earth","Mars","Jupiter","Saturn","Uranus"}))){ tests_passed++; } total_tests++;

    if((issame(bf("Earth", "Earth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mars", "Earth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "Makemake") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptune", "Mercury") , {"Venus","Earth","Mars","Jupiter","Saturn","Uranus"}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "Mars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercury", "Saturn") , {"Venus","Earth","Mars","Jupiter"}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pluto", "Mars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercury", "Venus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptune", "Saturn") , {"Uranus"}))){ tests_passed++; } total_tests++;

    if((issame(bf("Earth", "Neptune") , {"Mars","Jupiter","Saturn","Uranus"}))){ tests_passed++; } total_tests++;

    if((issame(bf("Uranus", "Jupiter") , {"Saturn"}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercury", "Neptune") , {"Venus","Earth","Mars","Jupiter","Saturn","Uranus"}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venus", "Mars") , {"Earth"}))){ tests_passed++; } total_tests++;

    if((issame(bf("NeptunMarse", "MeurJupitery") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MercuNeptunMarsery", "Neptune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercury", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MercuNeptunMarsery", "Mars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("", "NeptuMarsn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pluto", "Earth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rn", "Sturn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("ury", "Mercrury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mar", "Mar") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Earth", "MerVenuscury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rnth", "Earath") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pluto", "Earath") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("", "NepntuMarsn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pluto", "UranusEarth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pluto", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Sturn", "Sturn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("UranusEarth", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("UranusEarth", "Mars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("xrON", "Mars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Puluto", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NeptunePluto", "UrntVenushranusEarth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rnth", "MeurJupitery") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mars", "s") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("tJupiter", "Mars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rnth", "rntPlutoh") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rnthh", "UrntVenushraMercurynusEarth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Plo", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Puluto", "Earath") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venus", "MaNepntuMarsnrs") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Plsuto", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venus", "UranusEarth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Saturn", "Saturn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uSturnPuluto", "rntPlutohuSturn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("sMaNepntuMarsnrs", "s") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptune", "Neptune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercrury", "MarstJupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Sturn", "MarstJupiterSturn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("", "NepntueMarsn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("aMars", "s") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NeptunMarse", "s") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Earath", "Puluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NepPlutontueMarsn", "NepntueMarsn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NeptunMarse", "NepntuMarsn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("ss", "s") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarMr", "Mar") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PuluMercruryo", "Earath") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NepntueMarsn", "NepntueMarsn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pluto", "Plutuo") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NepPlutontueMarsn", "NepPlutontueMarsn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptuneuto", "NeptunePluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pluto", "PMars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pluto", "PMPPNepntuMarsnars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MPlutuoercury", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupUranuser", "Mars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("EartMeurJupiteryh", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pluto", "tEarth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Sturn", "MarstJupiterSturnxrON") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("lPluto", "lPluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MPlutuoercury", "MPlutuoPulutoury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pululto", "Pululto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("tJupiter", "PlsutoMars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Earth", "NeptuPulultone") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("tJupiterMercurPMPPNepntuMarsnars", "tJupiterMercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("UrntVenushraMercurynusEarth", "UrntVenushraMercurynusEarth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("", "EarthPuluMercruryo") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlutoaMars", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rntPlutohuSturn", "uSturnPuluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupUranuser", "ars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("aMarMMarMrr", "aMar") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pluto", "MarMr") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mar", "Neptune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PxrONlutto", "tEarth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("urMarstJupiterSturnxrONy", "Mercrury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Earrth", "MerVVenusenuscuruy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("cMerc", "cMerc") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rn", "SaturnStur") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercruy", "MarsteJupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mrnercury", "Mrnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsteJuer", "MarsteJupite") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Earth", "NeptuPulultonne") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Earth", "Sturn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Earth", "Mercy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeruVVenusnuscuruy", "MeruVVen") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mars", "Neptune") , {"Jupiter","Saturn","Uranus"}))){ tests_passed++; } total_tests++;

    if((issame(bf("Saturn", "Mercury") , {"Venus","Earth","Mars","Jupiter"}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "Venus") , {"Earth","Mars"}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupi", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Meurcury", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranuslMeurcuryuto", "PUranusluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "Veneus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupi", "Jiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pluto", "uto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("EaMercuryh", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranuslMeurcuryuto", "PUranuJiterury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uto", "JupitJupiterer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrcury", "PUranusluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupi", "J") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrcurNeptuney", "MeVenusrcurNeptuney") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranuslMeurcuryuto", "PUranu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupi", "Uranus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrcurNeptuney", "s") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranusluto", "Mars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uto", "uto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venues", "Venus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Merry", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeMeurcurynues", "Venus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JJupiterupiter", "Vensus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranu", "Jupi") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venus", "Venues") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("UrasnUus", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venus", "MeVenusrcurNeptuneyMercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("UUranus", "Jiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercury", "MMercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeMeurcurynues", "Plut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMercur", "MMercur") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptne", "Neptune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venues", "MeurcuryVensus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Veneu", "Jiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrcury", "Vensus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venus", "MeVenusrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uotoPlut", "utoPlut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuVeMeurcurynuespi", "J") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuVeMeurcurynuespi", "MMercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercury", "MrerMcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Uranus", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupiutJupiterer", "JupiutJupiterer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Meuyrccury", "Meurcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercury", "MJiterercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupitJupiterer", "Jupupiterer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("s", "Jupi") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Merry", "MeVenusrcurNeptuney") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlMeuyrccuryu", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranuslMeurcurryuto", "PUranuJiterury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlMeuyrcPUranucuryu", "uto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMercury", "MMercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrcurNeptuney", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrcurNeptuneyMercury", "MeVenusrcurNeptuney") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeurcuryVensus", "MeurcuryVensus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jiter", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Plut", "J") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Satuurn", "Saturn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMercury", "JuVeMeurcurynuespi") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MJSatuurniterercuryPUranuslMeurcuryuto", "MJSatuurniterercuryPUranuslMeurcuryuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupMercuryiutJupiterer", "JupiutJupiterer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("s", "JupiMerry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupiMerry", "JupiMerry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JMJSatuurniterercuryPUranuslMeurcuryuto", "Jupi") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NpepteunVeneus", "J") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrcury", "PUranJMJSatuurniterercuryPUranuslMeurcuryrutousluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uotoPlPut", "utoPlut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jiter", "Jiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("ss", "J") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Uranus", "Uranus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Veneu", "Veneu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranu", "MercuryJupi") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("utSatuurno", "utoo") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venues", "MeMMercMury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Veneu", "PUranusluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Plut", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Vensus", "MeVenusrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JMJSatuurniterercuryMeurcuryVensusPUranuslMeurcuryuto", "s") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranusluto", "PtUranusluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("UUranus", "s") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeMMercMury", "VenuJupMercuryiutJupiterers") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jite", "Jiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NppepteunVeneus", "NpepteunVeneus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Plut", "JJupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Meuyrccury", "s") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "Venuus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJupiteriter", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Earth", "MercSaturnury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptne", "MMercur") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jiter", "Venuus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJupiteriter", "MMercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pluto", "Earrth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJupiteriter", "UrasnUus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("pNeptne", "MMercur") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("eVenues", "Venus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("s", "s") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MrerMcury", "Venus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MJSatuurniterercuryPUranuslMeurcuryuto", "PUrJJupiterupiteranu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrcMercuryJupiurNeptuney", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlMeuyrcPUranucuryu", "MeVenusrcurNeptuneyMercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUrJJupiterupiteranu", "ss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("eVenues", "eVenues") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rMerry", "MercuMeVenusrcurNeptuneyry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJiter", "MJiterercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUrannu", "PUranu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mars", "uotoPlPut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("utSatunurno", "utoo") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeneNpepteunVeneusu", "Veneu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mas", "MarMs") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rMerSaturnry", "P") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SatPUranusVenuJupMercuryiutJupiterersJMJSatuurniterercuryPUranuslMeurcuryutolutourn", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJiter", "JupJiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUrannu", "PUrPlutoanu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUrVeneuJJupiterupiteranuotoPlutu", "MJSatuurniterercuryPUranuslMeurcuryuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarMs", "JupitJupiterer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NppeepteunVeneus", "NppepteunVeneus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mars", "Mars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJtiter", "JupJiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuVeMeurcurynuespiVenuus", "JuVeMeurcurynuespiVenuus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeMeurcurynues", "lut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrcurNeptuneyMercury", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMercury", "JuVeMeurcurynruespi") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jiter", "JitPUranuslMeurcuryutoJer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Vensus", "MeVenuotoPlPutusrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("UPUranuJiteruryMarMsranus", "UPUranuJiteruryMarMsranus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MUrasnUus", "JMJSatuurniterercuryMeurcuryVensusPUranuslMeurcuryuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JJupiter", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Meurcuury", "Meurcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Saturn", "Venus") , {"Earth","Mars","Jupiter"}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranuslMeurMMercuryryuto", "PUranuslMeurcuryuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JitPUranuslMeurcuryutoJer", "uotoPlPut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PtUranursluto", "JMJSatuurniterercuryPUranuslMueurcuryuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Satuurn", "Satuurn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Maas", "MMercur") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("eVenues", "eVen") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlMeuyrccuryPu", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MercuMeVenusrurNeptuneyry", "MercuMeVenusrcurNeptuneyry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JitPUranuslMeurcuryutoJer", "Vensus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venus", "MeMMercMury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NppepteunVeneus", "NppepteunVeneus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("pNeptne", "Jiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupiMerry", "Vensus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupi", "JuPtUranurslutoi") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JMJSatuurniterercuryPUranuslMeurcuryuto", "JMJSatuurniterercuryPUranuslMeurcuryuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venus", "rMerry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("UPUranuJiteruryMarMsranus", "UPUranuJPUrannuiteruryMarMsranus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venus", "Venus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pluo", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMerMMercurcury", "VeMeurcEarthurynues") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uto", "UPUranuJiteruryMarMsranus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupi", "PUrJJupitrupiteranu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJupiteriMrerMcuryter", "JupJupiteriter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("utoo", "MeVenuotoPlPutusrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenuPluts", "MeMMercMury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlMeuyrcPUranucuryu", "uuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJtiter", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrcury", "MeVenusJupiutJupitererrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeJMJSatuurniterercuryMeurcuryVeneurcuryutous", "Plut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("UUranus", "Vensus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JJupiteruMercuryJupipiter", "JJupiterupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenuJupMercuryiutJupiterers", "MeVenJJupiterusrcMercuryJupiurNeptuney") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("utSatuurno", "utSatuurno") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupi", "PtUranusluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "Vs") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("utoo", "NppepteunVeneus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuVeMeurcurynuespi", "UrasnUus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlMeuyrccuryPu", "Pluo") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercury", "MeVenuotoPlPutusrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uuto", "uotoPlPut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlMeuycPUranucury", "PlMeuycPUranucuryu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("utSatunurno", "Pluo") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uuto", "MercSaturnury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MercSatucrnury", "MercSaturnury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JJupiteruMercuryJupipiter", "JJupiteruMercuryJupipiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JJupiteruJMercuryJupipiter", "JJupiteruMercuryJupipiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("s", "JuJupiterpiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venuus", "Venuus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrcurNeptuney", "MeVenusrcurNeptuMeVenuotoPlPutusrcuryney") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venuees", "MeMMercMury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uotoPlut", "Satuurn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptune", "NNeptune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranuUPUranuJiteruryMarMsranus", "PUranu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venus", "rMery") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupitreer", "Jupitrer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rMerSaturnry", "NpepteunVeneus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuVeMeurcurynuespiVenuus", "utSatunurno") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PMeurcuurytUrano", "PMeurcuurytUranursluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("s", "PUrJJupiterupiteranu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("eVenues", "MercuMeVenusrcurNeptuneyry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrncury", "MeVenusrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJiter", "JupJiterMeVenusrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Plutoo", "Earth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("pNeptne", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uotoPlut", "Vensus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeMJSatuurniterercuryPUranuslMeurcuryutoMeurcurynues", "lut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("ss", "Jupi") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uuto", "uuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUMJSatuurniterernuuslMeurcuryutoranu", "PUMJSatuurniterercuryPUranuuslMeurcuryutoranu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rMetuneturnry", "rMerSaNeptuneturnry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MercuMeVenusrccurNeptuneyry", "MercuMeVenusrcurNeptuneyry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Maas", "VVeneu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarMs", "Mars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMeurcuryVensusPlMeuycPUranucuryu", "PlMeuyrccuryPu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Veneu", "JiterVenuus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenuotoPloPutusrcury", "MeVenuotoPlPutusrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercury", "MyJiterercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrcury", "MMercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("oPlu", "uto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NppepteMMercuryunVeneus", "NppepteunVeneus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUMJSatuurniterernuuslMeurcuryutoranu", "PUMJSatuurnuryPUranuuslMeurcuryutoranu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUrJ", "ss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranusluto", "MeVenusrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MercuMeVenusrcurNeptuneyry", "JupeiMerry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeJMJSatuurniterercuryMeurcuryVeneurcuryutous", "VeJMJSatuurniterercuryMeurcuryVeneurcuryutous") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeMeurcurynues", "Pllut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mury", "JJupiteruMercuryJupipiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Uranus", "M") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Merry", "PUranJMJSatuurniterercuryPUranuslMeurcuryrutousluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mury", "JMJSatuurniterercuryPUranuslMeurcuryuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Meuyrccury", "eurccury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeMeurcusrynues", "VeMeurcurynues") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rMerry", "PlutMury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Plutoo", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MJiterercury", "MJiterercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PluPto", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JJupiteriuJMercuryJupipiter", "JJupiteriuJMercuryJupipiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MuPlutoory", "JMJSatuurniterercuryPUranuslMeurcuryuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeMeurcEarthurynues", "MMerMMercurceury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUrJJupitrupiteranu", "VenPUrVeneuJJupiterupiteranuotoPlutuus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JiterVenus", "Venues") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenuPluts", "Saturn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pllut", "Earth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mury", "Jiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("UPUranuJiteruryMarMsranMus", "UPUranuJiteruryMarMsranMus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVVenusrcury", "MeVenusrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("utSatJiterunurno", "MercuMeVenusrcurNeptuneyry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Meuyrccury", "MeVenusrcurNeptuneyMercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("s", "PUrJJupitePUrVeneuJJupiterupiteranuotoPJluturupiteranu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlMeuycPUranucury", "PMeurcuurytUranursluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptuune", "Neptuune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranuslMeurcuerryutoJupiter", "PUranuslMeurcuerryutoJupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenPUrVMerryeneuJJupiterupiteranuotoPlutuus", "VenPUrVMerryeneuJJupiterupiteranuotoPlutuus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupiMerrry", "JupiMerry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUrVeneuJJupiterupiteranuotoPlutu", "uuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mury", "JJupiteruMerer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranusluto", "JupitJupiJupiutJupitererterer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupitePlutor", "JupitePlutor") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptune", "") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("eVenues", "Jiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rMetuneturnry", "PUrPlutoanu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuVeMMeVenusrcurNeptuneyeu", "MMercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("UPUranrMsranMus", "UPUranuJiteruryMarMsranMus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeurcuryMVensus", "MeuurcuryMVensus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUMJSatuurnuryPUranuuslMeurcuryutoranu", "lut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranuslMeurcurryuto", "PUVeMJSatuurniterercuryPUranuslMeurcuryutoMeurcurynuesranuJiterury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mrry", "Mry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrcury", "MeVenusrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("pNeptpne", "MMercur") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrcurNeptuney", "MeVeneVenuesuotoPlPutusrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranuslMeurcuerryutoJupiter", "PUranuslMeurcuerryutoJJJupiteruMererer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PtUranurNppeepteunVeneusto", "PtUranursluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupitEarrthJupiterer", "Jupupiterer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenuPlJuVeMeMJSatuurniterercuryPUranuslMeurcuryutourcurynuespiuts", "VenuPlJuVeMeurcurynuespiuts") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenuJupJupiterers", "VenuJupMercuryiutJupiterers") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlMeuyrcPUranucuryulut", "lut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("J", "J") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uPUranuslMeurcurryutouto", "uotoPlPut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturUPUranuJPUrannuiteruryMarMsranusn", "Venus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("UUranMuPlutooryus", "Vensus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUrJJupitrupiteranu", "PUrJJupitrupiteranu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JMJSaVenuJupJupitererstuurnieurPUrannucuryuto", "JMJSatuurnieurPUrannucuryuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeurcuryMVensus", "Veneu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rMury", "JJupiteruMercuryJupipiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("utSatuuPUranuslMeurcuerryutoJJJupiteruMerererrno", "utSatuurno") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jiteir", "Jiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJtiteer", "JupJiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MercuMeVenusrurNeputuneyry", "MercuMeVenusrcurNeptuneyry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupitreer", "VeJMJSatuurniterercuryMeurcuryVeneurcuryutous") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMerMMercurcury", "VeMeurcEartluthurynues") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JJJiteirupiteruJMercuryPUranuJupipiter", "JJJiteirupiteruJMercuryJupipiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JMJSaVenuJupJupitererstuurnieurPUrannucuryuto", "Plutoo") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PiUranuJiterury", "PUranuJiterury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rMerry", "PlutMurrMerSaNeptuneturnry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VePUranuJiterurysus", "Vensus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeurcuryMVensus", "MeurcuryMVensus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JiterVenus", "JJupiteruMercuryJupipiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MercuMeVenusruruNeptuneyry", "MercuMeVenusrurNeptuneyry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenNppepteunVeneussus", "Vensus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venues", "Jupi") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("eurccury", "euUUranMuPlutooryusrccury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuVeMeurcurynuespi", "JuVeMeurcurynuespi") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jiter", "MMerMMercurcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlMeuyrcPUranucuryulut", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JMJSaVenuJupJupitererstuurnieurPUrannucuryuto", "JMJSatuurniterercuryMeurcuryVensusPUranuslMeurcuryuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupitrer", "Venuees") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Veneu", "Meurcuury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMercur", "Mercur") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MercuMeVenusrcurNeptuneyry", "Venuees") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeMeeurMerryrcusrynues", "VVensuseMeurcurynues") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MercuMeptuneyry", "Venuees") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rMerSaturnry", "rMerSaturnry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("utSatJiterunurno", "utSatJiterunurno") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("utSatuurno", "uutSatuurno") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJiterMeVJupitreerenusrcury", "JupJiterMeVenuotoPlPutusrcuryMeVenusrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VVeneu", "Jiupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMerceury", "MMercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Uranus", "JupJiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JitPUMJSatuurniterercuryPUranuuslMeurcuryutoranur", "Jiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JitPUMJSatuurnitNeptuneerercuryPUranuuslMeurcuryutoranur", "Jiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuPtUranurrsluatoi", "JuPtUranursluatoi") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJupiteriMrer", "JupJupiteriter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PJMJSatuurniterercuryMeurcuryVensusPUranuslMeurcuryutoUranu", "MercuryJupi") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JMJSatrannucuryuto", "JMJSatuurnieurPUrannucuryuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturUPUranuJPUrannuiteruryMarMsranusn", "MercSaturnury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranruslMeurPlMeuyrccuryur", "PUranruslMeurcuerryutoJJJupiteruMererer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("UPUranuJiteruryMaruMsranus", "UPUranuJiteruryMarMsranus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venuus", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMury", "MMury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrcury", "MeVenusrncury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VVeneu", "utSatMaruurno") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Meurcury", "P") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PiUranuJiterury", "JJupiteruMercuryJupipiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptune", "NNepteune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenuotoPloPutusrcury", "MeVenusJupiutJupitererrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Maas", "MeVenJJupiterusrcMercuryJupiurNeptuney") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMerMMercuy", "MMerMMercurcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMerMMercuy", "MMerMMercuy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUrJJupiJitPUranuslMeurcuryutoJerterupiteranu", "VVeneu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JJupiMJSatuurniterercuryPUranuslMeurcuryutoer", "Plut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rMerry", "PUranuslMeurcuerryutoJupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JutSatuuPUranuslMeurcrMuryuerryutoJJJupiteruMerererrnoupi", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupitEarrthJupitererVeneNpepteunVeneusu", "Veneu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUMJSatuurnuryPUranuuslMeurcuryutoranu", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrcurNeptuneyMercury", "MeVenusrcurNeptuneyMercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaEarrthrMs", "VenuJupJupiterers") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Satuurn", "Saturun") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Uranus", "JJJiteirupiteruJMercuryPUranuJupipiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SatPUranusVenuJupMercuryiutJupitereorsJMJSatuurniterercurPUranuslMeurcuryutolutourn", "SatPUranusVenuJupMercuryiutJupitereorsJMJSatuurniterercurPUranuslMeurcuryutolutourn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranruslMeurPlMeuyrccuryur", "PUranruslMeurPlMeuyrccuryur") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SatPUranusVenuJupMercuryiutJupitereorsJMJSatuurniterercurPUranuslMeurcuryutolutourn", "MeVenuotoPlPutusrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MrerMcuryJitPUMJSatuurniterercuryPUranuuslMeurcuryutoranur", "JitPUMJSatuurniterercuryPUranuuslMeurcuryutoranur") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VePUranuJiterurysus", "VePUranuJiteruryrMeryus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlMeuyrcPUranucuryu", "PlMeuyrcPUranucuryu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptune", "PtUranursluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Plutoo", "oPlutoo") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JJupiteruMercuuryJupipiter", "JJupiteruMercuryJupipiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Satuurn", "SatPrun") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uuuto", "uuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SatPrun", "MeuurcuryMVensus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUVeMJSatuurniterercuryPUranuslMeurcuryutoMeurcurynuesranuJiterury", "PUVeMJSatuurniterercuryPUranuslMeurcuryutoMeurcurynuesranuJiterury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeJMJSatuurniterercuryMeurcuryVeneurcuryutous", "Mars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeMJSatuurniterercuryPUranuslMeurcuryutoMeurcurynues", "JuVeMeurcurynruespi") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jiitier", "JitPUMJSatuurniterercuryPUranuuslMeurcuryutoranur") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Saturn", "PtUranusluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uto", "JupitJupitVenPUrVeneuJJupiterupiteranuotoPlutuuserer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJupiteriter", "MyJiterercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenuPluts", "Jitupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranu", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PtUranurNppeepteunVeneusto", "PtUranurNppeepteunVeneusto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupitEarrthJupitererVeneNpepteunVeneusu", "JupitEarrthJupitererVeneNpepteunVeneusu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("utoPJuPtUranurrsluratoilut", "utoPJuPtUranurrsluatoilut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUrJJJupitEarrthJupitererVeneNpepteunVeneusuupitrupiteranu", "PUrJJupitrupiteranu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Plut", "MyJiterercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MJSatuurniterercuryPUranuslMeurcuryuPlutto", "MJSatuurniterercuryPUranuslMeurcuryuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jiter", "VenuJupJupiterersluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("oPlutoo", "MeVenusrcurNeptuney") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("pJupiJupJiterMeVJupitreerenusrcury", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupiMerry", "VeJMJSatuurniterercuryMeurcuryVeneurcuryutous") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMMercury", "MMercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NNepteune", "NNepteune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuVeMMeVenusrcurNeptuneyeu", "PlMeuyrccuryPu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MercuryJupi", "MercuryJupi") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("UPUranuJiteruryMarMsranus", "rMerSaturnryJupitEarrthJupiterer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarMMs", "MarMs") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jite", "MMerMMerrcuy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranruslMeurPlMeuyrccuryurM", "Meuyrccury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeMMercMury", "Veneus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SatPUranusVeanuJupMercuryiutJupiterersJMJSatuurniterercuryPUranuslMeurcuryutolutourn", "SatPUranusVenuJupMercuryiutJupiterersJMJSatuurniterercuryPUranuslMeurcuryutolutourn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeJMJSatuurniterercuryMeurcuryVeneurcuryutous", "VeJMJSatuurnryVeneurcuryutous") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJtiteer", "JupJter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranu", "VeJMJSatuurnryVeneurcuryutous") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranruslMeurcuerryutoJJJupiteruMererer", "PUranruslMeurcuerryutoJJJupiteruMererer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranusluto", "JupitJitererterer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJiterMeVenusrcury", "Jiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeMeurcusrynues", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranruslMeurPlMeuyrccuryurM", "Mrry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("pNeptne", "PllutJiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("eJiter", "eJiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeuurcuryMeVensusury", "MMerMMercuy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranussluto", "Mars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeMMerMMercurceuryurcuMry", "Meurucuury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JMJSatuurniterercuryPUranuslMeurcuryuto", "oPlu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("utSatunuorno", "Pluo") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlMeuyrcPUranucuryu", "PlMeuyrcPUranucuJitPUranuslMeurcuryutoJerryu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uotoPluMeVenuotoPloPutusrcuryt", "uotoPlut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NppepteMMercuryunVeneus", "MeVenusrcurNeptuney") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JitVenueser", "Jiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jiter", "JitPiUranuJiteruryr") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuVeMeurcurynuespi", "PUranruslMeurPlMeuyrccuryur") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJupiteriter", "uuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venues", "rMurSatPUranusVeanuJMMury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMerMMercurcurPy", "VeMeurcEartluthurynues") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MercuMeVenusrurNeputuneyry", "MercuMeVenusrurNeputuneyry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranusslutto", "NNeptune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JMJSatuurniterercuryPUranuslMeurcuryuto", "JMJeurcuryutoUPUranuJiteruryMarMsranus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PtUranurNppeepteunVeeneusto", "PtUranurNppeepteunVeneusto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupitJitererterer", "") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("s", "Plutoo") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JiterVenuus", "Jiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("UrasnUus", "arrMurSatPUranusVeanuJMMury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlMeryu", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uotoPlut", "Satuuurn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jiteir", "JiMuPlutooryter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uotoPlPut", "utPJitPUranuslMeurcuryutoJerlut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUrJJupitrupiteranu", "MuPlutoory") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("", "uto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mars", "NeptunePUranuslMeurMMercuryryuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupitrer", "Veenuees") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMerMMerrcuy", "Pluo") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMeurucuryVensusPlMeuycPUranucuryu", "PlMeuyrccuryPu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uotoPlPut", "Venus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMercury", "MMercur") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Veunus", "MeVenusrcurNeptuneyMercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUMJSatuurniterercuryPUranuuslMerMerSaturnryJupitEarrthJupitererurcuryutoranu", "PUMJSatuurniterercuryPUranuuslMerMerSaturnryJupitEarrthJupitererurcuryutoranu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeJMJSatuurniterercuryMeurcuryPlMeuyrcPUranucuryulutVeneurcuryutous", "Marslut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("anus", "Uranus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("eVenues", "MercuMeVenusrcurNeptuJitupiterry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NppeepnteunVeneus", "NppepteunVeneus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("s", "") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jiupiter", "VVeneu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenuotoPloPutMMerMMercurceuryusrcury", "MeVenuotoPloPutusrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJiter", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Plutlu", "Plutlut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NeptunePUranuslMeurMMercu", "NeptunePUranuslMeurMMercuryryuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venues", "Saturn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeuurcuryMVensus", "MeVenusrcurNeptuneyMercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VerJMJSatuurniterercuryMeurcuryPlMeuyrcPUranucuryulutVeneurcuryutous", "Venus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VePUranuJiterurysus", "VePUranuJiteruruuutoyrMeryus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PUranruslMeurPlMeuyrccuryurM", "MJSatuurniterercuryPUranuslMeurcuryuto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupiMerry", "PUVeMJSatuurniterercuryPUranuslMeurcuryutoMeurcurynuesranuJiterury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Maas", "MeVenJJupiterey") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pl", "JJupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MercuMeVenusrurNeptuneyry", "Plut") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMerMMerccuy", "MMerMMercuy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mar", "VeMeurcEarthurynJitPUMJSatuurniterercuryPUranuuslMeurcuryutoranurues") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jitupitter", "Jitupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenuotoPlPutusrcury", "MeVenuotoPlPutusrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMerMMerrcuy", "oPlVVensuseMeurcurynuesutoo") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("UUrarnus", "s") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("ss", "") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMercur", "Mercr") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jiupiter", "PUranruslMeurcuerryutoJJJupiteruMerererJiterury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mars", "rMury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenuPlJuVeMeMJSatuurniterercuryPUranuslMeurcuryutourcurynuespiuts", "VenuPlJuVeMeMJSatuurniterercuryPUranuslMeurcuryutourcurynuespiuts") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVenusrcurNeptunJJupiteruMercuryJupipiterey", "MeVenusrcurNeptuney") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NNePUranJMJSatuurniterercuryPUranuslMeurcuryrutouslutopteune", "NNepteune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlMeuyrcPUranNNepteuneucuryu", "PJupitJupiJupiutJupiterertererlMeuyrcPUranucuJitPUranuslMeurcuryutoJerryu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MMerMMercurcurPy", "PtUranurNppeeptenunVeneusto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pluto", "Plouto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SatPUuranusVenuJupMercuryiutJupitereorsJMJSatuurniterercurPUranuslMeurcuryutolutourn", "SatPUranusVenuJupMercuryiutJupitereorsJMJSatuurniterercurPUranuslMeurcuryutolutourn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venuuus", "Veenuus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupJiterMeVJupitreerenusrcury", "JupJiPlMeuyrccuryuenuotoPlPutusrcuryMeVenusrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venus", "JuPtUranursluatoi") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JJupiteruJMercuryJupipiter", "PlMeuyrcPUranNNepteuneucuryu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("UUranustupitter", "Jitupitter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeJMJSatuurniterercuryMeurcuryVeneurcuryutous", "MercuryJupi") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JVenuuusupiter", "Veneus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MercuMeVenusrurNeptuneyry", "Jitup") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("rMetuneturnry", "Saturun") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JJupiter", "pNeptne") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venuuus", "MeurcuryMVensus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlMeuyMMerMMerrcuyrccuryPu", "PlMeuyrccuryPu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenuPlJuVeMeurcurynuespiuts", "VeMeurcEarthurynJitPUMJSatuurniterercuryPUranuuslMeurcuryutoranurues") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Uranuus", "Uranus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NNePUranJMJSatuurniterercuryPUranuslMeurcuryrutouslutopteune", "JupitJupiJupiutJupiterertetrer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("", "") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercury", "") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("", "Saturn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("S", "MSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venus", "Uranus") , {"Earth","Mars","Jupiter","Saturn"}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupirter", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Saturn", "MaNeptune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnercury", "Venus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptu", "Neptu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthn", "MaNeptune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNeptune", "Neptune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptu", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnercury", "Vs") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("cMercry", "Mercry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptu", "Earth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "Veunus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "Vnus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMercuryrcury", "MarsMSaturneMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnus", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMercuryrcurypiter", "VenuscMercry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptu", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MVenuscMercryarsMSaturneMercuryrcury", "MarsMSaturneMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "MSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("eJupirter", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthhtn", "VeunMVenuscMercryarsMSaturneMercuryrcuryus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMercuryrcurypiter", "MSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venus", "Ms") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthhtn", "SaturEarthn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnercury", "Neptu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "MSatuy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNeptune", "SaturEarthn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupirter", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercrry", "Mercry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Vnuss", "Vs") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "MaNeptune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Vnuss", "MSatuy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSMaturnercury", "MSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MVenusMercurycMercryarsMSaturneMercuryrcury", "Neptu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupiUranuster", "MSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnercury", "Vnuss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMercuryrcurypiter", "MarsMSaturneMercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptu", "Vnus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupirt", "JuMercurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthhtn", "Mercrry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupirter", "Neptune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "JuepiMSatuyter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNeptuMVenuscMercryarsMSaturneMercuryrcuryune", "MaNeptuune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnercury", "MSMaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnMSaturnercury", "MarsMSaturneMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pluto", "Neptune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pluto", "Neptu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnercurMarsy", "Vs") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Vnuss", "Vnuss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenusUranuscMercry", "VenusUranuscMercry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SatuMercuryrEarthhtn", "SatuMercuryrEarthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Ms", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "NeptuneVnus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("eJupirter", "MarsMSaturneMercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnercury", "MSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNeptune", "MSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNeptVeunMVenuscMercryarsMSaturneMercuryrcuryusune", "MSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupitter", "Jupitter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturrneMercuryrcurypiter", "MarsMSaturneMercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Ea", "Earth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Vs", "Vs") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuMerJuMercurypitercurypiter", "JuMercurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSatuMercuryrEarthhtn", "Vs") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Ms", "MarsMSaturneMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnercury", "MEarthSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("upiUranuster", "MSaturnercuryVenusUranuscMercry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenuscMercry", "MarsMSaturneMercuryrcurypiteMaNeptuuner") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uss", "MarsMSaturrneMercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mss", "MarsMSaturneuMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pluto", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnMSaturnercuVenusry", "uVnyMSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthhtn", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NeptuneVnus", "MarsMSaturneMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptu", "Neptuu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uss", "ss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercrry", "Mercrry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuMercurypiter", "Mercrry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuJuepiMSatuyterpirter", "JuJuepiMSatuyterpirter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnMSaturnercuVenusry", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNeptune", "MSMaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mrcrry", "Mercrry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuMerJuMercurypitercurypiter", "Neptu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercrry", "VenuscMercry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaMarsMSaturneuMercuryrcurys", "Neptu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMercuryrcuryPluto", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMercuryrcuryrpiter", "MarsMSaturneMercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("sVeunusVnus", "sVnus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNeptVeunMVenuscMercryarsMSaturneMercuryrcuryusune", "MarsMSaturneMercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMercuryrcurypiter", "JuJuepiMSatuyterpirter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uJuMerJuMercurypitercurypiterVnMSaturnercury", "uVnMSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupirsVnusr", "JupiVsSatuMercuryrEarthhtnrtuer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlutEa", "Jupirt") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "VeunMVenuscMercryarsMSaturneMercuryrcuryus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptune", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Ms", "VeunusMs") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiiter", "MaNeptVeunMVenuscMercryarsMSaturneMercuryrcuryusune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SS", "MSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSatuy", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupiVsSatuMercuryrEarthhtnrtuer", "Mercry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jeupirter", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthn", "MVsSatuMercuryrEarthhtnaNeptunUranuse") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaMarsMSaturneuMercuryrcurys", "Neptune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenusUranuscMercryMarsMSaturneMercuryrcury", "VenusUranuscMercryMarsMSaturneMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnus", "MarsMSaturneMercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("sVnuss", "Vnuss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeuNeptuneVnusnus", "Veunus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenusUranuscMercryMarsMSaturneMercuryrcury", "uVnus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthn", "SaturEarthn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Nepttu", "Neptuu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSatuMercuryrEarthhtn", "MaNepMtune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMercuryrcurypiter", "Neptuu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSatuy", "Vs") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSatuy", "PlutoV") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VVenus", "Mars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnryMSaturnercury", "Mercrry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSatuMercuryrEarthhtnJupiter", "VsSatuMercuryrEarthhhtnJupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiitier", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PtlutE", "PtlutE") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiitier", "Jupiiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupNeptuneVnusirter", "JupNeptuneVnurter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenuscMercry", "VenuscMercry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptu", "MarsMSaturneMercuryrcuryPluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuJpiter", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VVenus", "Ms") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercyry", "Mercry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnerScury", "MEarthSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthn", "sMVsSatuMercuryrEarthhtnaNeptunUranuseVeunusVnus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Vnuss", "cMercry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturneVeunMVenuscMercryarsMSaturneMercuryrcuryusrScury", "MSaturneVeunMVenuscMercryarsMSaturneMercuryrcuryusrScury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Vnsus", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupMaNeptVeunMVenuscMercryarsMSaturneMercuryrcuryusuneiter", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnMSaturnercuVenusry", "JupirsVnusr") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venus", "sMMars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNeptunePlutEa", "MaNeptune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMercuryrScurypitePlutEar", "JuJuepiMSatuyterpirter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSatuMercuryrEanJupiter", "VsSatuMercuryrEarthhhtnJupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercyry", "MSaturneVeunMVenuscMercryarsMSaturneMercuryrcuryusrScury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeuNeptunMarsMSaturneMercuryrcurypitereVnusnus", "VeuNeptuneVnusnus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VVenus", "VVenus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnyMSaturnercury", "MarsMSaturrneMercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthn", "uss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSatuMercuryrEarrthhtn", "VsSatuMercuryrEarthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenusUranuscMercryMarsMSaturneMercuryrcury", "Vs") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenuscMMarsMSaturneMercuryrcuryercrPlutEa", "VenuscMMarsMSaturneMercuryrcuryercrPlutEa") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnryMSaturnercury", "uVnryMSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mrcrry", "Mrcrry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Vs", "uVnuss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturrneMercuryrcurypiter", "MarsMSaturneMercuryrcuryPluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SS", "SS") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMtSaturneMercuryrcurypiteMaNeptuuner", "Neptu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnercury", "sMVsSatuMercuryrEarthhtnaNeptunUranuseVeunusVnus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnercurMarsy", "MSaturnercurMarsy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiitier", "Saturn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MercurrMSaturnercuryy", "MercurMSaturnercuryy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("sMVsSatuMercuryrEarthhtnaNeptunUranuseVcMercryeunusVnus", "sMVsSatuMercuryrEarthhtnaNeptunUranuseVeunusVnus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupitSaturEarthhtner", "VensVeunusVnuss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Uranus", "MarsMSaturneuMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNeptune", "SaturEahn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnerrcury", "MSaturnercucry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthhtn", "MarsMSaturrneMercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("sVnJuMercuirypiteruss", "sVnJuMercurypiteruss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptuu", "Jupiiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Uranurs", "Uranus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VVenus", "MarsMSaturrneMercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuJuepiMSatuyterpirter", "MaNeptVeunMVenuscMercryarsMSaturneMercuryrcuryusune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNepMtune", "MSaturnercucry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnMSaturnercuVenusry", "Mercurssy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSMaturnercury", "MSMaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VVs", "VVenus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSatuMercuryrEarrthhtn", "Vs") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VeuNeptunMarsMSaturneMercuryrcurypitereVnusnus", "MSatuy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthn", "MuSaturnercurMarsy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenuscMMarsMSaturneMercuryrcuryercrPlutEa", "cMercry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuMerJuMercurypitercypiteJupiiterr", "JuMerJuMercurypitercypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSatuMercuryrEarthhtn", "VsSatuMercuryrEarrthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnryMSaturnnercury", "uVnryMSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMercuryrcurypiter", "MarsMSaturneMercuryrcuryrpiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MuSatursy", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("sMVsSatuMercuryrEarthhMaNeptuunetnaNeptunUranuseVeunusVnus", "sMVsSatuMercuryrEarthhtnaNeptunUranuseVeunusVnus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlutEa", "MarsMSaturneMercuryrcuryPluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VVs", "upiUranuster") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptu", "SatuMercuryrEarthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiitter", "MaNeptVeunMVenuscMercryarsMSaturneMercuryrcuryusune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarrsMSaturneMercuryrcurJupirtery", "MarrsMSaturneMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Uranurs", "MarsMSaturneMercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaMarsMSaturneuMercueryrcurys", "Vs") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("pitter", "rJupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercurssy", "Neptu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercyry", "JupiVsSatuMercuryrEarthhtnrtuer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenusUranuscMercryMarturnnercuryrcury", "VenusUranuscMercryMarsMSaturneMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnercury", "MarsMSaturrneMercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnryMSaturnercury", "VsSatuMercuryrEarthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarrsMSaturneMercuryrcury", "S") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("pitter", "sVnJuMercurypiteruss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptune", "MEarthSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SatuMercuryrEarthhtn", "NJuJpitereptune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupMaNeptVeunMVenuscMercryarsMSaturneMercuryrcMVenusMercurycMercryarsMSaturneMercuryrcuryuryusuneiter", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthn", "SaturEarthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mars", "Neptu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venus", "ars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MVenuscMercryarsMSaturneMercuryrcury", "sVnJuMercurypiteruss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercuryuss", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthn", "SaturEaMSaturnercuryrthn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturuaEarthn", "SaturMSaturnerScuryaEarthn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VVMSaturnerScuryenus", "MarsMSaturrneMercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenuMarssUranuscMercryMarturnnercuryrcury", "VenusUranuscMercryMarsMSaturneMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NJuJpitereptJupirsVnusrune", "NJuJpitereptJupirsVnusrune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Plluto", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MuSaturnercurMarsy", "MSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthn", "rJupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("nVnuss", "Vnuss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("pitter", "pitter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venus", "MJupirsVnusrs") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("lPlutEa", "eJupirter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMercuryrcuryrSaturn", "MarsMSaturneMercuryrcuryrSaturn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Uranus", "S") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VMaNeptunePlutEas", "VVenus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnerScury", "MuSaturnercurMarsy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSatuMercuryrEarthhtn", "VsSatuMercuryrEarthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuMerJuMercurypitercypiter", "JuepiMSatuyter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuMerJuMercurypitercurypiter", "VsSatuMercuryrEarthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("aSatturEarthn", "aSaturEarthn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSMaturnercury", "MarsMSaturrneMercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NJuJpitereptJupirsVnusrune", "SatuMercuryrEarthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturrneMercuryrcurypiter", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PllutVenuscMercry", "Plluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("sMVsSatuMercuryrEarthhtnaNeptunUranuseVeunusVnus", "sMVsSatuMercuryrEarthhtnaNeptunUranuseVeunusVnus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNeptVeunMVenuscMercryarsMSaturneMercuryrcuryusune", "JuJuepiMSatuyterpirter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Vnssus", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupirter", "r") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSatuMercuryrEarthhhtnJupiter", "Neptu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlutEa", "PlutEa") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneeMercuryrcuryrpSiter", "MarsMSaturneMercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Juipirter", "uVnus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenuscMercry", "Mercrry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnryMSaturnercury", "VsSatuMercuryrEanJupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNeptune", "MaNeptune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnercursy", "MSaturJupiitaernercurMarsy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupMaNeptVeunMVenuscMercryarsMSaturneMercuryrcMVenusMercurycMercryarsMSaturneMercuryrcuryuryusuneiter", "VsSatuMercuryrEarthhhtnJupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uss", "uss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNeptVeunMVenuscMercryarsMSaturneMercuryrcuryusune", "lPlutEa") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("tu", "tu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMercuryrcurypiter", "MarsMSaturneMercuryuVnyMSaturnercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnus", "VeuNeptunMarsMSaturneMercuryrcurypitereVnusnus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaMarsMSaturneuMercueryrcurys", "VMVsSatuMercuryrEarthhtnaNeptunUranuses") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnMSaturnercury", "MarsMSaeMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Juipirter", "MarsMSaturneuMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarnttn", "SaturEarnthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnercury", "MarsMSaturrneMercuryrcuMSaturnercursyrypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnercury", "MSatuy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercyry", "JupNeptuneVnurter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MeVMVsSatuMercuryrEarthhtnaNeptunUranusesrcury", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarJupirtthhtn", "VeunMVenuscMercryarsMSaturneMercuryrcuryus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiiter", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupirsVnusr", "Neptu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neputune", "MEarthSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNeptunJuMerJuMercurypitercypiteJupiiterre", "SaturEa") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenusUranuscMercryMarsMSaturneMercuryrcury", "uVunus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MVenusMercurycMercryarsMSaturneMercuryrcury", "Mercyry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NepMercurrMSaturnercuryyttu", "Neptuu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptuu", "Neptuu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturuaEarthn", "MSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEaMSaturnercuryrthn", "SaturEaMSaturnercuryrthn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NeptuSatuMercuryrEarthhtn", "Neptu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Uranurs", "UranuMercurMSaturnercuryys") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnryMSaturnercury", "VhsSatuMercuryrEarthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pllutlo", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptu", "MuSaturnercurMarsy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercuryuss", "Venus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthhcMercrytn", "SaturEarthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEa", "MercurMSaturnercuryy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("ssVnuss", "ssVnuss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("sMVsSatuMercuryrEarthhMaNeptuunetnaNeptunUranuseVeunusVnus", "Venus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("pitter", "rpJupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Pllluto", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("aaSaturEarthn", "MVenuscMercryarsMSaturneMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuMcurypiter", "JuMercurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnMSaturnercuVenusry", "ars") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturrneMercuryrcuMSaturnercursyrypiter", "MarsMSaturrneMerycuryrcuMSaturnercursyrypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptu", "VenusUranuscMercryMarturnnercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthhttn", "SaturEarthn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SatuMercuryrEarthhtn", "SatuMercMJupirsVnusrsrthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupirsVnusr", "uVnMSaturnercuVenusry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNeptunePlutEa", "MarsMSaturrneMercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupNeptuneVMVenusMercurycMercryarsMSaturneMercuryrcurynusirter", "JupNeptuneVnusirter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMercuryrcurypiteMaNeptuuner", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarrthhttn", "SaturEarrthhttn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SatturEarthn", "MaNeptune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercury", "Neptu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SatuVsrEarthn", "Jupiitier") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MrcrrysVeunusVnus", "MrcrrysVeunusVnus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMtSaturneMercuryrcurypiteMaNeptuuner", "yuVnyMSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Usranus", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneuMercuryrcury", "MarsMSaturneuMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSatuMerrcuryrEarthhtn", "VsSatuMercuryrEarthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnMSaturnercuVenusry", "Plluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupititer", "Jupititer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSatuy", "yuVnyMSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("sMMars", "VVs") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uJuMerJuMercurypitercurypiterVnMSaturnMaMarsMSaturneuMercueryrcurysercury", "uVnMSaurnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("sVnJuMercuuirypiteruss", "sVnJuMercurypiteruss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMerMcuryrcuryPluto", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMerMcauryrcuryPluto", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptu", "Vnssus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("sVnJuMercurypiteruss", "aSaturEarthn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSatuMercury", "VsSatuMercuryrEarthEahtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthhhtn", "SaturEarthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarrsMSaturneMercuryrcurJupirter", "MarrsMSaturneMercuryrcurJupirtery") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("cMercPllutVenuscMercryy", "cMercMry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercrcrry", "Merrcrry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("cMercry", "SaturEaMSaturnercuryrthn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlutVenuscMMarsMSaturneMercuryrcuryercrPlutEao", "Pluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenusUranuscMercryMaMaNeptunJuMerJuMeVnusteJupiiterrercury", "VenusUranuscMercryMaMaNeptunJuMerJuMeVnusteJupiiterrercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Neptu", "JuMcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SS", "r") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupirsVnusr", "uVnMSaturnMaNeptuuneercuVenusry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NVVMSaturnerScuryenuseptu", "Vnssus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("pittper", "pittper") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupiVsSatuMercuryrEarthhtnrtuer", "MEarthSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("PlutEa", "SaturMSaturnerScuryaEarthn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NVVuMSaturnerScuryenuseptu", "NVVMSaturnerScuryenuseptu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MuStatuy", "MSatuy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnerccury", "MEarthSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("cMercPllutVenEarcryy", "cMercPllutVenuscMercryy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiitier", "Juppiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSatuMerrcuryrEaarthhtn", "VsSatuMercuryrEarthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarrathn", "Earth") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Uranurs", "MarsMSaturneMerMcuryrcuryPluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnerScury", "NeptMarsMSaturneeMercuryrcuryrpSiteruu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("auaSaturEarthn", "MVenuscMercryarsMSaturneMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("sVnJuMercurypiteruss", "sVnJuMercurypiteruss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMpercuryrScurypitePlutEar", "MaNeptunJuMerJuMercurypitercypiteJupiiterre") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mss", "MarsMSatMurneuMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturnercucry", "MSMaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SatulPlurtEaruaEarthn", "SaturuaEarthn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSaturJupiitaernercurMarsy", "MuSaturnercurMarsy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSMSaturnercurMarsyaturneMercuryrcuryPluto", "Mercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupititer", "JupiUranusterupititer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MercurrMSaturnercuryy", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSatuMerrcuryrEarthhtn", "uVnMSaturnMaNeptuuneercuVenusry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSaSaturEarrathnMerrcuryrEarthhtn", "uVnMSaturnMaNeptuuneercuVenusry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMpercuryrScurypitePrlutEar", "MaNeptunJuMerJuMercurypitercypiteJupiiterre") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarrathn", "V") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNepMtune", "JuJuepiMSatuyterpirterpitter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VenuscMMarsMSaturneMercuryrcuryercrPlutEa", "PlutVenuscMMarsMSaturneMercuryrcuryercrPlutEao") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSatuMerrcuryrEaarthMuSatursyhtn", "VsSatuMercuryrEarthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMVsSatuMercuryrEarthhhtnJupiterercuryrcurypiter", "MarsMSaturneMercuryrcurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SatuMhercuryrEarthhtn", "SatuMhercuryrEthhtn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupiitierSatulPlurtEaruaEarthn", "Santurn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MJuMcurypiterSaturnercucry", "MSMaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuepiMSatuyter", "JuepiMSatuyter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSatuy", "uVnus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("auaSaturEarthn", "JupiitierSatulPlurtEaruaEarthn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNeptVeunMVenusccMercryarsMSaturneMercuryrcuryusune", "MaNeptVeunMVenusccMercryarsMSaturneMercuryrcuryusune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupiter", "VeunMVenuscMercryarsMSaturyus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupirsVnusr", "uVnMSJuMerJuMercurypitercypiteJupiiterraturnMaNeptuuneercuVenusry") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMercuryrcurypiter", "MarsMSaturneMercuryrcurypaSaturEarthnitMercrryer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VnssMarrsMSaturneMercuryrcuryus", "Vnssus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("tpitMarsMSaturneMpercuryrScurypitePlutEarter", "sVnJuMercurypiteruss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaNeMarsMSMSaturnercurMarsyaturneMercuryrcuryPlutoptune", "MaNeptunePlutEa") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MaaNepMtune", "sMVsSatuMercuryrEarthhtnaNeptunUranuseVeunusVnus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("pittper", "pitrtper") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Nepttu", "uVunus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NeptuSaEarthhtn", "NeplPlutEaPlllutou") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uVnrySaturEaMSaturnercuryrthncury", "uVnryMSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarnttn", "Jupiitier") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneeMercuryrcuryrpSiter", "MarsMSaturneMercuryrcurSypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Ea", "cMercPllutVenEarcryy") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSMSaturnercurMarsyaturneMercuryrcury", "MarsMSMSaturnercurMarsyaturneMercuryrcuryPluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("SaturEarthn", "SaturEaJupiUranusterMSaturnercuryrthn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MuSatursy", "MarsMSaturneuMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSatuMercuryrEarrthhtnJuepiMSatuyter", "JuepiMSatuyter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MSatuy", "yuVnyMrSaturnercury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMercuryrcurypiteMaNeptuuner", "MercMury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupirter", "MaNeptuune") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Mercyry", "MaNeptunJuMerJuMercurypitercypiteJupiiterre") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSatuMercuryrEarthhtn", "VsSatuMercuryrEarrthhNeputunetn") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSMSaturnercurMarsyaturMarsMSaturneMercuryrcurypiteMaNeptuunerneMercuryrcuryPluto", "MarsMSMSaturnercurMarsyaturneMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NepMercurrMSaturnercuryyttu", "rpJupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VsSatuMercuryrEarrthhtn", "MarrsMSaturneMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupirter", "uss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("VnssusNeptuu", "pitterNeptuMSaturneVeunMVenuscMercryarsMSaturneMercuryrcuryusrScuryu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturneMpercuryrScurypitePlutEar", "VenuMarssUranuscMerccryMarturnnercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JupNeptuneVnusirter", "MarrsMSaturneMercuryrcury") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("sMVsSatuMercuryrEarthhMaNeptuunMaNeptVeunMVenusccMercryarsMSaturneMercuryrcuryusuneetnaNeptunUranuseVeunusVnus", "MarsMSaturneMercuryrcurypaSaturEarthnitMercrryer") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuJuepiMSatuyterpirterpitter", "Jupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("MarsMSaturrneMercuryrcurypiter", "VsSatuMercuryrEarthhhtnJupiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuMercurypiter", "JVsSatuMercuryrEarthEahtnuMercurypiter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NeptuSaEarthhtn", "MarsMSaturneMercuryrcuryPluto") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("JuepiMSatuyteVenuMarssUranuscMerccryMarturnnercuryrcury", "JuepiMSatuyter") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("NVVuMSaturnerScuryenuseptu", "NVVuMSaturnerScuryenuseptu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("uss", "ssVnJuVeuNeptuneVnusnusMercuuirypiterusss") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Jupr", "NeptuneVnus") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("Venus", "NepMercurrMSaturnercuryyttu") , {}))){ tests_passed++; } total_tests++;

    if((issame(bf("McMercrySatuy", "PlutuVnMSaturnercuryoV") , {}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


