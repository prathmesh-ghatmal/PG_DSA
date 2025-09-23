def find_no_of_gas_station(stations,dist,k):
    no_of_stations=0
    for i in range(len(stations)-1):
        no_in_between=(stations[i+1]-stations[i])/dist
        if (stations[i+1]-stations[i])==(dist*no_in_between):
            no_in_between-=1
            
        no_of_stations+=no_in_between
    return no_of_stations

def minimize_max_distance(stations,k):
    maxi=0
    for i in range(len(stations)-1):
        maxi=max(stations[i+1]-stations[i],maxi)

    low=0
    high=maxi
    diff=1e-6
    while high-low>diff:
        mid=(high+low)/2.0
        result=find_no_of_gas_station(stations,mid,k)

        if result>k:
            low=mid
        else:
            high=mid
    return high

arr = [1, 2, 3, 4, 5]
k = 4

print(minimize_max_distance(arr,k))
