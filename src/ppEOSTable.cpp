/*
 * ppEOSTable.cc
 * Author: Leo C. Stein (leo.stein@gmail.com)
 * Date: 2013 Dec. 17
 *
 * This is the implementation for getting a parametrized EOS from
 * Table III of Read, Lackey, Owen, and Friedman (2009) [arXiv:0812.2163]
 *
 */

#include <string>
#include <cmath>
#include <vector>
#include "ppEOSTable.hpp"

struct ppEOSTableEntry
{
public:

  const std::string name;
  const double log10p1, Gamma1, Gamma2, Gamma3;

};

ppEOS findEOS(const std::string &name)
{

static const std::vector<ppEOSTableEntry> table
  {
    {"PAL6",   34.380,2.227,2.189,2.159},
    {"SLy",    34.384,3.005,2.988,2.851},
    {"AP1",    33.943,2.442,3.256,2.908},
    {"AP2",    34.126,2.643,3.014,2.945},
    {"AP3",    34.392,3.166,3.573,3.281},
    {"AP4",    34.269,2.830,3.445,3.348},
    {"FPS",    34.283,2.985,2.863,2.600},
    {"WFF1",   34.031,2.519,3.791,3.660},
    {"WFF2",   34.233,2.888,3.475,3.517},
    {"WFF3",   34.283,3.329,2.952,2.589},
    {"BBB2",   34.331,3.418,2.835,2.832},
    {"BPAL12", 34.358,2.209,2.201,2.176},
    {"ENG",    34.437,3.514,3.130,3.168},
    {"MPA1",   34.495,3.446,3.572,2.887},
    {"MS1",    34.858,3.224,3.033,1.325},
    {"MS2",    34.605,2.447,2.184,1.855},
    {"MS1b",   34.855,3.456,3.011,1.425},
    {"PS",     34.671,2.216,1.640,2.365},
    {"GS1",    34.504,2.350,1.267,2.421},
    {"GS2",    34.642,2.519,1.571,2.314},
    {"BGN1H1", 34.623,3.258,1.472,2.464},
    {"GNH3",   34.648,2.664,2.194,2.304},
    {"H1",     34.564,2.595,1.845,1.897},
    {"H2",     34.617,2.775,1.855,1.858},
    {"H3",     34.646,2.787,1.951,1.901},
    {"H4",     34.669,2.909,2.246,2.144},
    {"H5",     34.609,2.793,1.974,1.915},
    {"H6",     34.593,2.637,2.121,2.064},
    {"H7",     34.559,2.621,2.048,2.006},
    {"PCL2",   34.507,2.554,1.880,1.977},
    {"ALF1",   34.055,2.013,3.389,2.033},
    {"ALF2",   34.616,4.070,2.411,1.890},
    {"ALF3",   34.283,2.883,2.653,1.952},
    {"ALF4",   34.314,3.009,3.438,1.803}
  };

 for (auto eos : table)
   if ( eos.name == name )
     return ppEOS( pow(10., eos.log10p1),
                   eos.Gamma1,
                   eos.Gamma2,
                   eos.Gamma3 );
  // if not found, we return SLy for now.
  // we should really throw an error!
  return ppEOS( pow(10., 34.384),
                3.005,
                2.988,
                2.851 );

};
