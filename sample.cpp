// if (m==0 || n|| 0)
// {
//     return 0;
// }

// int dp[n+1][m+1];


// //setting the 0th row and 0th column to 0
// for (int i = 0; i < (n+1); i++){
//     for (int j = 0; j < (m+1); j++) {
//         if (dp[i][0] || dp[0][j])
//         {
//             dp[i][j]=0; 
//         }
        
//     }    
// }

// /*setting the whole dp[][] to -1 value
//              (As this will help us in identifying overlapping problem afterwards) */
// for (int i = 1; i < (n+1); i++){
//     for (int j = 1; j < (m+1); j++) {
//             dp[i][j]=-1; 
//     }    
// }

// //loop for finding the lcs
// for (int i = 1; i < (n+1); i++){
//     for (int j = 1; j < (m+1); j++) {
//             if (dp[i-1]==dp[j-1])
//             {
//                 dp[i][j]= 1 + dp[i][j];
//             }
//             else if (dp[i-1]!=dp[j-1])
//             {
//                 dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//             }
            
          
//     }    
//       return dp[n+1][m+1];
// }
