# Socials

<p align="center">
  <a href="https://discord.com/users/xaprier#6129" target="_blank" rel="noreferrer">
    <img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/socials/discord.svg" width="32" height="32" />
  </a>&nbsp
  <a href="https://www.github.com/xaprier" target="_blank" rel="noreferrer">
    <img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/socials/github.svg" width="32" height="32" />
  </a>&nbsp
  <a href="http://www.instagram.com/xaprier.dev" target="_blank" rel="noreferrer">
    <img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/socials/instagram.svg" width="32" height="32" />
  </a>&nbsp
  <a href="https://www.linkedin.com/in/xaprier/" target="_blank" rel="noreferrer">
    <img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/socials/linkedin.svg" width="32" height="32" />
  </a>&nbsp
  <a href="https://twitter.com/xaprier_dev" target="_blank" rel="noreferrer">
    <img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/socials/twitter.svg" width="32" height="32" />
  </a>
</p>

# methods-regime
 REGIME Method C++ Code With Object Oriented Principles 

# REGIME Method
<details>
    <summary><b>Introduction</b></summary>
    <p>
    The REGIME method, initially introduced by Hinloopen, Nijkamp, and Rietveld in
1983 [6, 7] is a multiple attribute qualitative method which solves the problem
using the REGIME matrix, and a final ranking of the alternatives is done. In the
final ranking, the weight of attributes, introduced by the decision maker, is
important and can influence the results. This technique is used for ranking the
sawability of ornamental and building stones [8] and evaluation and ranking of
coastal areas [9] due to its features. The REGIME method, used in various fields,
has the following features:
    </p>
    <ul>
      <li>It is one of the compensatory methods;</li>
      <li>The attributes are independent of each other;</li>
      <li>There is no need to convert the qualitative attributes into the quantitative
attributes.</li>
    </ul>
    <p>
    In this method, the matrix of alternatives and attributes is firstly formed based on
the information received from the decision maker as in Eq. (<a href="#1.1">1.1</a>).
    </p>
    <table align="center" border="true">
        <p align="center" id="1.1"><b>(1.1)</b>X<sub>(m,n)</sub>; i = 1,...,m; j = 1,...,n</p>
        <tr>
            <td><i>r</i><sub>11</sub></td>
            <td>...</td>
            <td><i>r</i><sub>1j</sub></td>
            <td>...</td>
            <td><i>r</i><sub>1n</sub></td>
        </tr>
        <tr>
            <td>...</td>
            <td>...</td>
            <td>...</td>
            <td>...</td>
            <td>...</td>
        </tr>
        <tr>
            <td><i>r</i><sub>i1</sub></td>
            <td>...</td>
            <td><i>r</i><sub>ij</sub></td>
            <td>...</td>
            <td><i>r</i><sub>in</sub></td>
        </tr>
        <tr>
            <td>...</td>
            <td>...</td>
            <td>...</td>
            <td>...</td>
            <td>...</td>
        </tr>
        <tr>
            <td><i>r</i><sub>m1</sub></td>
            <td>...</td>
            <td><i>r</i><sub>mj</sub></td>
            <td>...</td>
            <td><i>r</i><sub>mn</sub></td>
        </tr>
    </table><br>
</details>
<details>
  <summary>Description of REGIME Method</summary>

  ## 2.1 Superiority Index
  <p>
  In decision matrix of Eq. (2.1), r<sub>ij</sub> is the element of the decision matrix for <i>i</i>th
alternative in <i>j</i>th attribute. Then, the decision maker provides the weight of
attributes [ w<sub>1</sub> ; w<sub>2</sub> ; ... ; w<sub>n</sub> ]:
  </p>
  <p>
  The set of attributes in which alternative A<sub><i>f</i></sub> is at least as good as alternative A<sub><i>l</i></sub> ,
displayed by Ê<sub><i>fl</i></sub> .
 </p>

 ## 2.2 Superiority Identifier
 <p>
 The superiority identifier is calculated by Eq. (<a href="#2.2">2.2</a>).
 </p>
 <p align="center" id="2.2">
  <img alt="Eq 2.2" width="400" src="assets/formula1.png">
  </img>
  <br>
  (2.2)
  <br>
 </p>
 <p>where <i>w<sub>j</sub></i> represents the weight of attributes provided by the decision maker.</p>

 ## 2.3 Impacts Matrix
 <p>
 This matrix is derived from ranking the alternatives based on the attributes which
rank the alternatives from decision-matrix information.
 </p>

 ## 2.4 REGIME Matrix
 <p>
  The REGIME matrix is derived from pairwise comparison of alternatives. For example, if two alternatives of <i>A<sub>1</sub> , A<sub>2</sub> &isin; A</i> are considered, the status of <i>A<sub>1</sub> , A<sub>2</sub></i> alternatives should be compared to each other in all attributes.
 </p>
 <p>
 For each <i>C<sub>j</sub></i> attribute, the <i>E<sub>fl,j</sub></i> identifier is defined for each (<i>A<sub>f</sub> , A<sub>l</sub></i>) alternative as in Eq. (<a href="#2.3">2.3</a>) [6, 9].
 </p>
 <p align="center" id="2.3">
  <img src="assets/formula2.png" width="400"  alt="Eq 2.3">
  <br>
  (2.3)
 </p>
 <p>
 where (<i>r<sub>lj</sub> , r<sub>fj</sub></i> ) indicates the rank of (<i>A<sub>l</sub> , A<sub>f</sub></i> ) alternative based on the attribute <i>C<sub>j</sub></i> . When two alternatives are examined in all attributes, a vector is defined as in Eq. (<a href="#2.4">2.4</a>) [6, 9].
 </p>
 <p align="center" id="2.4">
  <img src="assets/formula3.png" width="400"  alt="Eq 2.4"></img><br>(2.4)
 </p>
 <p>
 The vector of Eq. (<a href="#2.4">2.4</a>) is called the REGIME, and the total matrix is result of the REGIME vectors.
 </p>

 ## 2.5 The Guide Index
 <b>The first technique:</b> The guide index <i>Ê<sub>jl</sub></i> is introduced as in Eq. (<a href="#2.5">2.5</a>) [9].
 <p align="center" id="2.5">
  <img src="assets/formula4.png" width="400" height="150" alt="Eq 2.5"></img><br>(2.5)
 </p>
 <i>Ê<sub>fl</sub></i> obtains a final ranking of alternatives.<br>

 The second technique: The value of the best alternative is obtained by the superior identifier <i>Ê<sub>fl</sub></i>. In fact, the REGIME method is based on the <i>Ê<sub>fl</sub></i> - <i>Ê<sub>lf</sub></i> subtract. The positive result of subtract indicates that alternative <i>A<sub>f</sub></i> is superior to the alternative <i>A<sub>l</sub></i> , and the negative result demonstrates the superiority of alternative <i>A<sub>l</sub></i> over alternative <i>A<sub>f</sub></i> .

 ## 2.6 The Final Ranking of Alternatives
 According to the two techniques presented in the previous step, the final ranking of alternatives can be determined based on the guide index.
</details>

<details>
  <summary>Case Study</summary>
  The dam construction project should be implemented by the relevant ministry. The project can be implemented by the relevant ministry (A<sub>1</sub>), domestic contractor (A<sub>2</sub>), or foreign contractor (A<sub>3</sub>). Attributes such as cost (C<sub>1</sub>), strength (<sub>2</sub>C), national reputation (C<sub>3</sub>), capacity (C<sub>4</sub>), and work hardness (C<sub>5</sub>) are available for decision making. <a href="#fig1.1">Fig. 1.1</a> displays the decision matrix. Further, <a href="#t1.1">Table 1.1</a> indicates the weight of the attributes. The purpose is to select the best contractor and express the final ranking of alternatives by the REGIME method.
  <br><br>
  <p align="center" id="fig1.1">
    <img src="assets/study1.png" width="400"></img><br>
    (Fig 1.1)
  </p>
  <p align="center" id="t1.1">
    <img src="assets/study2.png" width="400"></img><br>
    (Table 1.1)
  </p>

  ## Solution
  ### Superiority Index
  <p>
    The superiority attribute is computed as follows:
    <p align="center"><img src="assets/study3.png" width="400"></img></p>
  </p>

  ### Superiority Identifier
  <p>
    The superiority identifier is as follows:
    <p align="center"><img src="assets/study4.png" width="400"></img></p>
  </p>

  ### Impacts Matrix
  <p>
    Initially, the impacts matrix is formed based on ranking the alternatives. The negative attributes of cost and work hardness should be considered in this matrix. The first rank belongs to the lowest value, and the impacts matrix is as shown in <a href="#fig1.2">Fig. 1.2</a>.
    <p align="center" id="fig1.2">
      <img src="assets/study5.png" width="400"></img><br>
      (Fig 1.2)
    </p>
  </p>

  ### REGIME Matrix
  <p>
    The REGIME matrix, obtained from pairwise comparison in the impact matrix, is formed as shown in <a href="#fig1.3">Fig. 1.3</a>.
    <br>&nbsp;&nbsp;&nbsp;As:
    <p align="center">
      <img src="assets/study6.png" width="400"></img><br><br>
      <img src="assets/study7.png" id="fig1.3" width="400"></img><br>
      (Fig 1.3) REGIME Matrix
    </p>
  </p>

  ### The Guide Index
  <p>
    The guide index is obtained as follows:
    <p align="center">
      <i><b>
      Ê<sub>12</sub> = -0.500<br>
      Ê<sub>13</sub> = -0.500<br>
      Ê<sub>21</sub> = 0.500<br>
      Ê<sub>23</sub> = -0.300<br>
      Ê<sub>31</sub> = 0.500<br>
      Ê<sub>32</sub> = 0.300<br>
      </b></i>
    </p>
  </p>
</details>