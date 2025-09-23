def place_gas_station(stations,k):
    how_many=[0]*(len(stations)-1)
    for placed in range(1,k+1):
        maxsection=-1
        maxind=-1

        for i in range(len(stations)-1):
            diff=stations[i+1]-stations[i]
            sectionlength=diff/(how_many[i]+1)
            if sectionlength>maxsection:
                maxsection=sectionlength
                maxind=i
        how_many[maxind]+=1

    maxsection=-1
    for i in range(len(stations)-1):
  
        diff=stations[i+1]-stations[i]
        sectionlength=diff/(how_many[i]+1)
        maxsection=max(sectionlength,maxsection)
    
    return maxsection

arr = [1, 2, 3, 4, 5]
k = 1

print(place_gas_station(arr,k))

